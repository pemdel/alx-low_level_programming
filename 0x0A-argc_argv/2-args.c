#include <stdio.h>

/**
 * main - this is a function that prints the number of arguments
 * @argc: argc parameter
 * @argv: an array for command listed
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", f, argv[f]);
	}
	return (0);
}
