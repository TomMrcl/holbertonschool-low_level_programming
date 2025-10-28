#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 exept 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i <= 9; i++)
	{

		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
