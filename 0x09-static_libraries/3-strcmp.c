#include "main.h"
/**
 * _strcmp - A function that is used to compare
 * two strings to determine if they are equal or
 * find the first character that is different between them
 * @s1: This is the first string for comparison
 * @s2: This is the second string for comparison
 *
 * Return: difference between the first non-matching characters
 *         or 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
