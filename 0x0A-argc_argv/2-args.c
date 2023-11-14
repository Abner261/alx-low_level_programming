#include <stdio.h>

/**
* main - A program that prints all arguments it receives
* @argc: An integer representing the number of command-line arguments
* passed to the program
* @argv: An array of strings representing the command-line arguments
* Return: 0 to indicate the successful execution of the program
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
