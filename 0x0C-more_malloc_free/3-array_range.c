#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from max to min
 * @min: first value of array
 * @max:last value of array
 * Return: if function fails - NULL else pointer to new array
 */

int *array_range(int min, int max)
{
	int *aray, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	aray = malloc(sizeof(int) * size);

	if (aray == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		aray[index] = min++;

	return (aray);
}
