#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: An integer representing the number of command-line arguments
 * passed to the program
 * @argv: An array of strings representing command-line arguments
 * Return: 0 to indicate successful execution of the program
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)

	printf("Error\n");

	else
	{
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	}
	return (0);
}
