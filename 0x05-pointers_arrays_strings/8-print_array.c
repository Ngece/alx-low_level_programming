#include "main.h"
#include <stdio.h>

/**
 *
 * a: The array of integers.
 * n: Is the number of elements to be printed.
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
