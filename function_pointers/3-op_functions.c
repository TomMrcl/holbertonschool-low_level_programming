#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - fonction qui additionne deux entiers
 *
 * @a: premier entier
 * @b: second entier
 *
 * Return: somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fonction qui soustrait deux entiers
 *
 * @a: premier entier
 * @b: second entier
 *
 * Return: difference de a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fonction qui multiplie deux entiers
 *
 * @a: premier entier
 * @b: second entier
 *
 * Return: produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fonction qui divise deux entiers
 *
 * @a: premier entier
 * @b: second entier
 *
 * Return: quotient de a et b
 */
int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n"), exit(100);
	return (a / b);
}

/**
 * op_mod - fonction qui calcule le reste de la division
 * de deux entiers
 *
 * @a: premier entier
 * @b: second entier
 *
 * Return: reste de la division de a par b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n"), exit(100);
	return (a % b);
}
