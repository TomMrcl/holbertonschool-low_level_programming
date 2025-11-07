#include <stdio.h>
/**
 * main - imprime le nom du programme
 *
 * @argc: nombre d'arguments de la ligne de commande
 * @argv: tableau des arguments de la ligne de commande
 *
 * Return: 0 pour success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
