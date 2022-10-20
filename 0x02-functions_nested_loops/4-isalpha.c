#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: is the parameter to be found
 *
 * Return: 1 if char is lower or upper. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
