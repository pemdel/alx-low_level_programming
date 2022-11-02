#include "stdio.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string parameter
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
