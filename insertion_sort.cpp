#include <iostream>
#include <vector>

void insert_Sort (std::vector<int> & arr)
{
    int key {};
    int j {};
    for (int i = 1; i < arr.size(); ++i) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
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

    std::vector<int> vec { 1, 8, 7, 45, 98, 47, 3, 4, 3};
    insert_Sort(vec);
    printArray(vec);

}