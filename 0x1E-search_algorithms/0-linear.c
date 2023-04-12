#include <stdio.h>

// Defines the linear seach function
int linear_search(int *array, size_t size, int value) {
	for (int i = 0; i < size; i++) {
		//print the elements checked and return i when found
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value) {
			return 1;
		}
	}
	return -1;
}

