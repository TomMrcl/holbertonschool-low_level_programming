#include "main.h"
/**
 * string_toupper - convertit une chaîne en majuscules
 *
 * @str: pointeur vers la chaîne à convertir
 *
 * Return: pointeur vers la chaîne convertie
 */
char *string_toupper(char *str)
{
	int c;
	int i;

	for (c = 0; str[c] != '\0'; c++)
		;

	for (i = 0; i <= c; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
