#include <iostream>
#include <string>
#include <fstream>
#include <boost/dynamic_bitset.hpp>

long max_number_input ( const std::string & path ) {
    std::ifstream fin;
    fin.open( path );
    long max {};
    if ( fin.is_open() ) {
        long tmp {};
        while ( !fin.eof()) {
            fin >> tmp;
            if ( tmp > max ) {
                max = tmp;
            }
        }
    }
    fin.close();
    return max;
}

void bit_sort ( const std::string & path) {
    const int max = max_number_input(path) + 1;
    std::ifstream fin;
    boost::dynamic_bitset<> bset(max, 0);
    fin.open( path );
    if ( fin.is_open() ) {
        size_t tmp {};
        while ( !fin.eof()) {
            fin >> tmp;
            bset[tmp] = 1;
        }
    }
    fin.close();
    std::ofstream fout;
    fout.open("output.txt");
    if (fout.is_open()) {
        for (size_t i = 0; i < bset.size(); ++i ) {
            if (bset[i] == 1) {
                fout << i << " ";
            }
        }
    }
    fout.close();
}



int main () {

    bit_sort("input.txt");
}