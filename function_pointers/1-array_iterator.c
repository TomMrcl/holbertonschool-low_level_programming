#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exécute une fonction donnée sur
 * chaque élément d'un tableau.
 *
 * @array: le tableau d'entiers.
 * @size: la taille du tableau.
 * @action: pointeur vers la fonction à exécuter sur chaque
 * élément du tableau.
 *
 * Return: Rien
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
