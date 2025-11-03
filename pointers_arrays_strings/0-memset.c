#include "main.h"

/**
 * _memset - fonction qui remplit la mémoire avec un octet constant
 *
 * @s: permet de spécifier l'adresse du bloc mémoire à ré-initialiser
 * @b: indique la valeur à utiliser pour remplir le bloc de mémoire
 * @n: indique le nombre d'octets à initialiser
 *
 * Return: Le pointeur vers la zone mémoire s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		s[i] = b;
	}
	return (s);
}
