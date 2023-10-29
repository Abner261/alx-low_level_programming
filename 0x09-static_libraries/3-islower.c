#include "main.h"

/**
 * _islower - A function which is used to check if a given
 * character is a lowercase letter
 * @c: The character to be checked
 * Return: 1 if c is lowercase, 0if it isn't
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
