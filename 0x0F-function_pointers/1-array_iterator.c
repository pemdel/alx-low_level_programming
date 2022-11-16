#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 *
 * @size: size of the arrray
 * @action: pointer to the function we need to use
 * @array: integer array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (array && action)
		for (f = 0; f < size; f++)
			action(array[f]);
}
