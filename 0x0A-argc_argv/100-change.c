#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function calculates the minimum number of coins needed
 * to make change for an amount of money specified as a command-line argument
 * @argc: An integer representing the number of command-line arguments
 * @argv: An array of strings representing command-line arguments
 * Return: 1 if there is an error, 0 if the program executes successfully
 */

int main(int argc, char *argv[])
{
	int change, input;
	unsigned int x;
	char *p;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = strtol(argv[1], &p, 10);
	change = 0;

	if (!*p)
	{
		while (input > 1)
		{
			for (x = 0; x < sizeof(coins[x]); x++)
			{
				if (input >= coins[x])
				{
					change += input / coins[x];
					input %= coins[x];
				}
			}
		}
		if (input == 1)
			change++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", change);
	return (0);
}
