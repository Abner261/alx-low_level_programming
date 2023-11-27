#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function calculates the minimum number of coins needed
 * to make change for an amount of money specified as a command-line argument
 * @argc: An integer representing the number of command-line arguments
 * @argv:  An array of strings representing command-line arguments
 * Return: 1 if error, 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int change = 0, input;
	unsigned int a;
	char *p;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2 || (input = strtol(argv[1], &p, 10), *p != '\0'))
	{
		printf("Error\n");
		return 1;
	}

	while (input > 1)
	{
		for (a = 0; a < sizeof(coins) / sizeof(coins[0]); a++)
		{
			if (input >= coins[a])
			{
				change += input / coins[a];
				input %= coins[a];
			}
		}
	}
	
	change += (input == 1);
	printf("%d\n", change);

	return 0;
}

