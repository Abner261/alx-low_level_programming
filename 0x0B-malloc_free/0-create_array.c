#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of char
 * and initializes it with a specific char
 * @size: This is the size of the array I want to create
 * @c: This is the character that I want to fill the array with
 * Description: Make an array of a specific size
 * and fill it with a character c
 * Return: A substitute for the array, or NULL in case of failure
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);
}
