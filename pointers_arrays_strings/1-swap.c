#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap between a and b pointers
 *
 * @a: Pointer a
 * @b: Pointer b
 *
 * Return: Rien
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
