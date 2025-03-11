#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: column of array
 * @height: row of array
 *
 * Return: pointer to the 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				free(grid[i - 1]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
