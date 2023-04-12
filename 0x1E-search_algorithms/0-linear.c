#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    // Check if the array is NULL
    if (array == NULL) {
        return -1; // return -1 if array is NULL
    }
    // Loop through each element of the array
    for (size_t i = 0; i < size; i++) {
        // If the current element of the array matches the target value, return its index
        if (array[i] == value) {
            return i; // return index of first occurrence of value
        }
    }
    // If the target value is not found in the array, return -1
    return -1; // return -1 if value not found in array
}

