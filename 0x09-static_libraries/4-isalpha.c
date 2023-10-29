#include "main.h"

/**
 * _isalpha - A function which is used to check if a given
 * character is an alphabetic character
 * either in lowercase or uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

