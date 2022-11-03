#include "main.h"

int prime_checker(int, int);

/**
 * is_prime_number - identifies prime numbers
 * @n: parameters
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}

/**
 * prime_checker - checks prime numbers
 * @n: number
 * @i: iterator
 * Return: a as 1 or 0
 */

int prime_checker(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime_checker(n, i + 1));
}
