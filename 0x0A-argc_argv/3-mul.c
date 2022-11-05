#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is a function that prints the number of arguments
 * @argc: argc parameter
 * @argv: an array for command listed
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[0]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
