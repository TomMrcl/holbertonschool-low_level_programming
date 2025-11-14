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
	int *array;
	int i, size;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}