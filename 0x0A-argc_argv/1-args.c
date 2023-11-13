#include <stdio.h>

/**
 * main -  A program that prints the number of arguments passed into it
 * @argc: An integer representing the number of command-line arguments
 * passed to the program
 * @argv: An array of strings representing the command-line arguments
 * Return: 0 to indicate successful execution of the program
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
