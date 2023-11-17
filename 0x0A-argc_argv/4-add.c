#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function that  Prints the sum of command-line arguments
 * if they are digits
 * @argc: An integer representing the number of command-line arguments
 * @argv: An array of strings representing command-line arguments
 * Return: 0 if the program executes successfully
 * 1 and prints "Error" if any command-line argument is not a digit
 */

int main(int argc, char *argv[])
{
	int a, b, add = 0;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[a]);
		}
	}
	printf("%d\n", add);
	return (0);
}
