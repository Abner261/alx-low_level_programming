#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: The minmum value of the range for the created array
 * @max: The maxmum value of the range for the created array
 * Return: NULL if malloc fails or min > max
 */

int *array_range(int min, int max)
{
	int *x;
	int y;

	if (min > max)
	return (NULL);

	x = malloc((max - min + 1) * sizeof(*x));

	if (x == NULL)
	return (NULL);

	for (y = 0; min <= max; y++, min++)

	*(x + y) = min;

	return (x);
}
