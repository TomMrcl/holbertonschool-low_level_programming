#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - point d'entree du programme
 *
 * @argc: nombre d'arguments passes au programme
 * @argv: tableau des arguments passes au programme
 * Return: 0 en cas de succes
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
