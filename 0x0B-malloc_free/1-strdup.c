#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *f;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	f = malloc(sizeof(char) * (i + 1));

	if (f == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		f[r] = str[r];

	return (f);
}
