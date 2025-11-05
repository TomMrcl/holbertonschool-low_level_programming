#include "main.h"

/**
 * _strlen_recursion - calcule une chaîne de caractères utilisant récursion
 *
 * @s: pointeur vers la chaîne de caractères
 *
 * Return: longueur de la chaîne de caractères
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
