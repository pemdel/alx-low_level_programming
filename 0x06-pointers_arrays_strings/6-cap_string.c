#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	int y = 0;

	while (str[y])
	{
		while (!(str[y] >= 'a' && str[y] <= 'z'))
			y++;
		if (str[y - 1] == ' ' ||
		str[y - 1] == '\t' ||
		str[y - 1] == '\n' ||
		str[y - 1] == ',' ||
		str[y - 1] == ';' ||
		str[y - 1] == '.' ||
		str[y - 1] == '!' ||
		str[y - 1] == '?' ||
		str[y - 1] == '"' ||
		str[y - 1] == '(' ||
		str[y - 1] == ')' ||
		str[y - 1] == '{' ||
		str[y - 1] == '}' ||
		y == 0)
			str[y] -= 32;
		y++;
	}
	return (str);
}
