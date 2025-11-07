#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres entiers passés en arguments
 *
 * @argc: nombre d'arguments
 *
 * @argv: tableau d'arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
