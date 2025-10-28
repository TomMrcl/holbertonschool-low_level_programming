#include "main.h"
/**
 * print_triangle - Dessine un triangle
 *
 * @size: Taille du triangle
 *
 * Return: Rien
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		int j;
		int k;

		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}

		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
