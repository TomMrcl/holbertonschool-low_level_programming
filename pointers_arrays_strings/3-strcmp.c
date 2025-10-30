#include "main.h"
/**
 * _strcmp - compare deux chaînes de caractères
 *
 * @s1: première chaîne
 * @s2: seconde chaîne
 *
 * Return: valeur négative si s1 < s2,
 *         valeur positive si s1 > s2,
 *         0 si s1 == s2
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}
