#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - fonction qui retourne un pointeur vers un tableau 2D
 *
 * @width: largeur du tableau
 * @height: hauteur du tableau
 *
 * Return: pointeur vers le tableau 2D, NULL en cas d'échec
 */

int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
