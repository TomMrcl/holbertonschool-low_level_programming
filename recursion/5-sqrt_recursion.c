#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion_helper - fonction d'aide pour calculer la racine carrée
 *
 * @n: Nombre
 * @guess: supposition actuelle
 *
 * Return: La racine carré de n
 */

int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_recursion_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - fonction renvoie la racine carrée naturelle d'un nombre
 *
 * @n: Nombre
 *
 * Return: La racine carré de n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}
