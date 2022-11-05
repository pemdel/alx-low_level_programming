#include <stdio.h>

/**
 * main - this is a function that prints the number of arguments
 * @argc: argc parameter
 * @argv: an array for command listed
 * Return: 0 for success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
