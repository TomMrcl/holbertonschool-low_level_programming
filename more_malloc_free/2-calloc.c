#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - alloue de la memoire pour un tableau de nmemb elements de size
 *  octets chacun et initialise toute la memoire a zero
 *
 * @nmemb: le nombre d'elements
 * @size: la taille de chaque element en octets
 *
 * Return: un pointeur vers la memoire allouee, ou NULL en cas d'echec
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
