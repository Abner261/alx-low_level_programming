#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: A pointer to the first element of the array
 *
 * @size: The number of elements in an array
 *
 * @value: The value to search for
 *
 * Return: The first index where the value is located or
 * If value is not present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t = i;

	if (array == NULL)
	{
		return (-1);  /* Return -1 if the array is NULL */
	}

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);  /* Print each value being compared */
		if (array[i] == value)
		{
			return (i);  /* Return the index if the value is found */
		}
	}

	return (-1);  /* Return -1 if the value is not found */
}
