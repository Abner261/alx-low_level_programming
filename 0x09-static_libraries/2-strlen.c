#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: This is the input string for
 * which I want to determine the length
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
