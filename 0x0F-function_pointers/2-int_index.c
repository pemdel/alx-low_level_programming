#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element when cmp does not return 0.
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (f = 0; f < size; f++)
			if (cmp(array[f]))
				return (f);
	}
	return (-1);
}
