#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - fonction qui concatène deux chaînes de caractères
 *
 * @s1: première chaîne de caractères
 * @s2: deuxième chaîne de caractères
 * @n: nombre maximum de bytes à concaténer de s2
 *
 * Return: pointeur vers la nouvelle chaîne de caractères
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *new_str;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (i = 0; i < n; i++)
		new_str[len1 + i] = s2[i];

	new_str[len1 + n] = '\0';

	return (new_str);
}
