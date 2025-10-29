#include "main.h"

/**
 * _puts - Affiche une chaine de caractère avec un retour à la ligne
 *
 * @str : Chaine de caractère
 *
 * Return: Rien
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
