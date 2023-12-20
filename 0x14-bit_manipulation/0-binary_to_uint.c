#include "main.h"

/**
 * binary_to_unit - A function that converts a
 * binary number to an unsigned int
 *
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 if there
 * are invalid characters or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}

	return (dec_val);
}
