#include "main.h"
/**
 * *_strcat - Fonction qui permet de concaténer 2 chaines
 *
 * @dest: Chaine de caractère
 * @src: Chaine de caractère
 *
 * Return: Les deux chaines concaténée
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	for (c = 0; dest[c]; c++)
		;

	for (i = 0; src[i] != '\0'; c++)
	{
		dest[c] = src[i];
		i++;
	}

	dest[c] = '\0';

	return (dest);
}
