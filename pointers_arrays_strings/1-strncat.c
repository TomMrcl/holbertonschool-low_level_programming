#include "main.h"
/**
 * *_strncat - Fonction qui permet de concaténer 2 chaines avec un nombre
 *
 * @dest: Chaine de caractère
 * @src: Chaine de caractère
 * @n: Nombres de caractères à concaténer
 *
 * Return: Les deux chaines concaténée
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	for (c = 0; dest[c]; c++)
		;

	for (i = 0; i < n && src[i] != '\0'; c++)
	{
		dest[c] = src[i];
		i++;
	}

	dest[c] = '\0';

	return (dest);
}
