#include "main.h"

/**
 * _strspn - fonction qui calcule la longueur d'un préfixe de chaîne
 *
 * @s: chaîne de caractères
 * @accept: chaîne de caractères contenant les octets à accepter
 *
 * Return: Renvoie le nombre d'octets dans le segment initial de s
 *         qui ne contiennent que des octets de accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (c);
}
