#include "main.h"

/**
 *  _sqrt_recursion - square roots using recursion
 * @n: parameter to square root
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrrt(n, i + 1));
}
