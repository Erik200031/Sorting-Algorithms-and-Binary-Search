#include <iostream>
#include <vector>

template <typename T , typename I>
T binary_Search (const std::vector<T> & arr, I start, I end, const T key)
{
  
    if (start <= end) {
        I mid = start + (end - start) / 2;
        //Best Case
        if (*mid == key) {
            return mid - arr.begin();
        }
        else if (key > *mid) {
            start = mid + 1;
            return binary_Search (arr, start, end, key);
        }
        else if (key < *mid) {
            end = mid - 1;
            return binary_Search (arr, start, end, key);
        }
    }
    //If not found
    return -1;
}

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

    std::vector<int> vec { 1, 8, 7, 4, 6, 12, 44, 4};
    insert_Sort (vec);
    printArray (vec);
    std::cout << binary_Search(vec, vec.begin(), vec.end(), 12);

}
