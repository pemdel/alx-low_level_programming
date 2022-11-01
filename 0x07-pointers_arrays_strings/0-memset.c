#include "main.h"

/**
 * _memset - this fills memory with constant byte
 * @s: string
 * @b: a char
 * @n: an int
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
