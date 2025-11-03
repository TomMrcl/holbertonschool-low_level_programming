#include "main.h"

/**
 * *_strpbrk - fonction qui cherche une chaine de caracteres
 *
 * @s: chaine de caracteres
 * @accept: chaine de caracteres a chercher
 *
 * Return: pointer du caractere trouve sinon NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
