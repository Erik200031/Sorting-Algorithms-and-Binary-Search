#include <iostream>
#include <vector>
#include "swap.h"

void bubble_Sort(std::vector<int> & arr) 
{ 
    for (int i = 0; i < arr.size()-1; i++) {     
        for (int j = 0; j < arr.size()-i-1; j++) { 
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
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
    bubbleSort(vec);
    printArray(vec);

}