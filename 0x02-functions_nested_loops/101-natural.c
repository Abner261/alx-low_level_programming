#include <stdio.h>

/**
 * main - A program that Computes and prints the sum of multiples
 * of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

		for (i = 0; i < 1024; i++)
		{
			if ((i % 3 == 0) || (i % 5 == 0))
				sum = sum + i;
		}
		printf("%d\n", sum);
		return (0);
}
