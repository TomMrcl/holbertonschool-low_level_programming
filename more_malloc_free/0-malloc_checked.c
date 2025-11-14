#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fonction qui alloue de la mémoire
 *
 * @b: taille de la mémoire à allouer
 *
 * Return: un pointeur vers la mémoire allouée ou termine le programme
 * avec un code d'erreur de 98 si l'allocation échoue
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
