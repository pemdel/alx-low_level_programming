#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: if new_size == old_size noting is aded to ptr
 * new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memo;
	char *ptr_copy, *filter;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		memo = malloc(new_size);

		if (memo == NULL)
			return (NULL);

		return (memo);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	memo = malloc(sizeof(*ptr_copy) * new_size);

	if (memo == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filter = memo;
	for (index = 0; index < old_size && index < new_size; index++)
		filter[index] = *ptr_copy++;

	free(ptr);
	return (memo);
}
