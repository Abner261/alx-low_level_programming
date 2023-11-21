#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A  function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @height: An integer representing the number of rows in the 2D array
 * specifying its vertical dimension
 * @grid: A pointer to a 2D array of integers that I want
 * to free the memory it occupies
 * Return: The function returns void, indicating that it
 * doesn't return any meaningful value
 * Its primary purpose is to free memory allocated for a 2D array
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
