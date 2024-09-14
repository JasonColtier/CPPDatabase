//
// Created by jason on 14/09/2024.
//

#include <iostream>

template <typename T>
void BubbleSort(T array[], int size) {

    //a bubble sort will need at most {size} loops
    for (int i = 0; i < size; ++i) {
        for (int j = i; j > 0; --j) {
            if (array[j] < array[j - 1]) {
                std::swap(array[j], array[j - 1]);
            }
        }
    }
}

template <typename T>
void PrintArray(T array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout<<std::endl;
}


int main() {

    int arr[] = {12, 51, 1, 14, -8, 40, 0};
    float arrfloats[] = {0.15,88.13, 1515.155, -1.55};


    int size = sizeof(arr) / sizeof(arr[0]);
    PrintArray(arr, size);
    BubbleSort(arr, size);
    PrintArray(arr, size);

    int size2 = sizeof(arrfloats) / sizeof(arrfloats[0]);
    PrintArray(arrfloats, size2);
    BubbleSort(arrfloats, size2);
    PrintArray(arrfloats, size2);

    return 0;
}