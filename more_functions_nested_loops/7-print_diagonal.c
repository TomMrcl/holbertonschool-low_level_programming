#include "../functions_nested_loops/main.h"
/**
 * print_diagonal - Déssine une diagonale
 *
 * @n: Nombre de diagonal
 *
 * Return: Rien
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
