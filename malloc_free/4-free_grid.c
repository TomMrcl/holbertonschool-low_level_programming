#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - fonction qui libère un tableau 2D précédemment alloué
 *
 * @grid: pointeur vers le tableau 2D à libérer
 * @height: hauteur du tableau 2D
 *
 * Return: rien
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
