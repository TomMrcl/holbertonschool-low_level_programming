#include "main.h"
/**
 * rev_string - Envoie ne mémoire la chaine inversée
 *
 * @s: Chaine de caractère
 *
 * Return: Retourne rien
 */
void rev_string(char *s)
{
	int c;
	int i;
	char tmp;

	for (c = 0; s[c] != '\0'; c++)
		;

	for (i = 0; i < c / 2; i++)
	{
		tmp = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = tmp;
	}
}
