#include <iostream>
#include <vector>
#include "swap.h"


void selection_sort (std::vector<int> & arr) {
    int minidx {};
    for (int i = 0; i < arr.size()-1; i++) { 
        minidx = i;    
        for (int j = minidx + 1; j < arr.size(); j++) { 
            if (arr[j] < arr[minidx]) {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    } 
}


void printArray(const std::vector<int> & arr) 
{ 
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl; 
}

int main () {

    std::vector<int> vec {1,2,5,4,9,3,2,9,5,123};
    selection_sort(vec);
    printArray(vec);

}