#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @str: pointeur vers la chaîne à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *leet(char *str)
{
	int i;
	char *leet_map = "aAeEoOtTlL";
	char *leet_repl = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; leet_map[j] != '\0'; j++)
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_repl[j];
				break;
			}
		}
	}

	return (str);
}
