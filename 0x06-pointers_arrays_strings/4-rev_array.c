#include "main.h"

/**
 * reverse_array - reverses the content of san array of integers
 * @a: array
 * @n: number of elements in the array
 * Reurn: rev
 */

void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < n; y++)
	{
		n--;
		z = a[y];
		a[y] = a[n];
		a[n] = z;
	}
}
