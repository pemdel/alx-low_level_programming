#include "main.h"
#include <stdio.h>

/**
 * print_array - a  function that prints n elements of an array of integers
 * @a: array
 * @n: numberof values to be printed
 */

void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);
		if (f != n - 1)
			printf(", ");
	}

	printf("\n");
}
