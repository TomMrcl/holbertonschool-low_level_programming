#include "main.h"
/**
 * print_line - fonction qui dessine une ligne
 *
 * @n: number of underline
 *
 * Return: Rien
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
