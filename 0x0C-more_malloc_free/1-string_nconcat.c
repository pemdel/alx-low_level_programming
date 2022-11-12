#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to be concatenated to s1
 * Return: if fail - NULL else a pointer to the concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int fal = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		fal++;
	concat = malloc(sizeof(char) * (fal + 1));

	if (concat == NULL)
		return (NULL);
	fal = 0;

	for (index = 0; s1[index]; index++)
		concat[fal++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concat[fal++] = s2[index];
	concat[fal] = '\0';

	return (concat);
}
