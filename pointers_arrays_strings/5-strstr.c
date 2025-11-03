#include "main.h"

/**
 * _strstr - localise la première occurrence de la chaîne 'needle'
 *             dans la chaîne 'haystack'
 * @haystack: chaine à chercher
 * @needle: chaine à trouver
 *
 * Return: pointeur vers le début de la première occurrence de 'needle'
 *         ou NULL si 'needle' n'est pas trouvée
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
	}

	return (0);
}
