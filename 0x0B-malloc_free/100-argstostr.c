#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that combines all the arguments of your program
 * @ac: The number of command-line arguments provided to the program
 * @av: An array of strings containing the individual command-line arguments
 * Return: A pointer to a new string that combines
 * the command-line arguments with newline characters
 * or NULL if the operation fails
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
