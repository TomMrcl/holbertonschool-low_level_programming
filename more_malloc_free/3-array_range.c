#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - cree un tableau d'entiers contenant toutes les valeurs
 *  entre min (inclus) et max (exclus)
 *
 * @min: la valeur minimale
 * @max: la valeur maximale
 *
 * Return: un pointeur vers le tableau d'entiers, ou NULL en cas d'echec
 */

int *array_range(int min, int max)
{
	int *grid;
	int i;

	if (min > max)
		return (NULL);

	grid = malloc((max - min + 1) * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		grid[i] = min + i;
	}

	return (grid);
}
