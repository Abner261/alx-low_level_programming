#include "main.h"
/**
 * _strncpy - A function which is used to copy
 * part of one string into another
 * but with a limit on how many characters are copied
 * @dest: This is the destination string where
 * I want to copy characters to
 * @src: This is the source string
 * from which I want to copy characters
 * @n: This is the maximum number of
 * characters to copy from src to dest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}

