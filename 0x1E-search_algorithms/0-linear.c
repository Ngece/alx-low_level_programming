#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
	for (int i = 0; i < size; i++) {
		//Print element checked until i mathches value
		printf("Value checked array[%d] = [%d]", i, array[i])
		if (array[i] == value) {
			return 1;
		}
	}
	return -1;

}
