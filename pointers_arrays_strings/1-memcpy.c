#include "main.h"

/**
 * _memcpy - fonction qui copie la mémoire de src vers dest
 *
 * @dest: Pointer qui récupère la mémoire de src
 * @src: Pointer qui se fait copier ça mémoire
 * @n: Nombre de mémoire à copier
 *
 * Return: Retourne le pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char temp;

	for (i = 0; i != n; i++)
	{
		temp = src[i];
		dest[i] = temp;
	}
	return (dest);
}
