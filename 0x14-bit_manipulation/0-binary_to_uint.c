#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - A function that converts a
 * binary number to an unsigned int
 *
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 if there
 * are invalid characters or b is NULL
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
