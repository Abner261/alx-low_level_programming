#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints it's name followed by a new line
 * @argc: An integer representing the number of command-line
 * arguments passed to the program
 * @argv: An array of strings representing the command-line arguments
 * Return: 0 to indicate successful execution of the program
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return(0);
}
