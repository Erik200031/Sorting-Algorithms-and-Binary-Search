#include <iostream>
#include <string>
#include <fstream>
#include <boost/dynamic_bitset.hpp>

void bit_sort ( const std::string & path, const long size) {
    std::ifstream fin;
    boost::dynamic_bitset<> bset(100, 0);
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

long size_of_input ( const std::string & path ) {
    std::ifstream fin;
    fin.open( path );
    long numbers_size {};
    if ( fin.is_open() ) {
        long tmp {};
        while ( !fin.eof()) {
            fin >> tmp;
            ++numbers_size;
        }
    }
    fin.close();
    return --numbers_size;
}

int main () {

    bit_sort("input.txt", size_of_input("input.txt"));
}