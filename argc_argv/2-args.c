#include <stdio.h>
/**
 * main - imprime tous les arguments de la ligne de commande
 *
 * @argc: nombre d'arguments de la ligne de commande
 * @argv: tableau des arguments de la ligne de commande
 *
 * Return: 0 pour success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
