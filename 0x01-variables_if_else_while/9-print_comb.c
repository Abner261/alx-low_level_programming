#include <stdio.h>

/**
 * main - A program that prints all possible combinations
 * of single-digit numbers
 *
 * Description: This program prints the digits from 0 to 9 separated by commas
 * and spaces, followed by a newline character.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
