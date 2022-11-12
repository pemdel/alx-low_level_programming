#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: byte size of each array element
 * Return: if nmemb or size  = 0 then NULL else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *filter;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);
	filter = memo;

	for (index = 0; index < (size * nmemb); index++)
		filter[index] = '\0';

	return (memo);
}
