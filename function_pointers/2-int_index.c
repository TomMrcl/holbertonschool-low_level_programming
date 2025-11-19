#include "function_pointers.h"

/**
 * int_index - recherche un entier dans un tableau.
 *
 * @array: le tableau d'entiers.
 * @size: la taille du tableau.
 * @cmp: pointeur vers la fonction de comparaison.
 *
 * Return: l'index du premier élément pour lequel
 * la fonction de comparaison ne renvoie pas 0.
 * Si aucun élément ne correspond, retourne -1.
 * Si la taille est inférieure ou égale à 0, retourne -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
