#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x
 * raised to the power of y
 * @x:First character to be checked
 * @y:second character to be checked
 * Return: If y is lower than 0,function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
