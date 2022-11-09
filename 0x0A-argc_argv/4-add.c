#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argc parameter
 * @argv: an array for the listed command
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int result = 0, num, x, y, z;

	if (argc == 1)
		printf("0\n");

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
