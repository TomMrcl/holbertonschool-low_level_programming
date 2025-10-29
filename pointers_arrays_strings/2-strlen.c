#include "main.h"
/**
 * _strlen - Fonction qui compte le nombre de char
 *
 * @s: Chaine de charactère
 *
 * Return: Le nombre de charactère
 */
int _strlen(char *s)
{

	int i = 0, sum = 0;
	char c = s[0];

	while (c != '\0')
	{
		sum++;
		c = s[++i];
	}
	return (sum);
}
