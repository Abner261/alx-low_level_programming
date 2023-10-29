#include "main.h"

/**
 * _atoi - a function that converts a string into an integer
 *
 * @s: This is the input string that contains
 * the digits I want to convert into an integer
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, x = 0;
	unsigned int res = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		res = (res * 10) + (s[x] - '0');
		x++;
	}
	res *= sign;
	return (res);
}
