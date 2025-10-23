#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Affiche tous les nombres de n jusqu'à 98
 * @n: Le point de départ
 *
 * Description: Cette fonction affiche tous les nombres
 * à partir de n jusqu'à 98, séparés par une virgule et un espace.
 *
 * Return: rien
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
