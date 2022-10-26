#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: destination
 * @src: source
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		j++;
	}

	return (dest);
}
