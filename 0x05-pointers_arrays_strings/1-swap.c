#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: A Pointer to the first integer to swap
 * @b: A Pointer to the second integer to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
