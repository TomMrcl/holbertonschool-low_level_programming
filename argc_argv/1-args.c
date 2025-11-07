#include <stdio.h>
/**
 * main - imprime le nombre d'arguments de la ligne de commande
 *
 * @argc: nombre d'arguments de la ligne de commande
 * @argv: tableau des arguments de la ligne de commande
 *
 * Return: 0 pour success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
