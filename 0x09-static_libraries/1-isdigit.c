#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 to 9)
 * @c: This is the integer that I want to check
 * to see if it's a digit
 * Return: 1 if c is a digit, 0 if it isn't
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
