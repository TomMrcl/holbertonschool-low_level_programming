#include "main.h"

/**
 * _pow_recursion - fonction qui permet de faire x puissance y
 *
 * @x: Nombre
 * @y: Nombre
 *
 * Return: retourn x puissance y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
