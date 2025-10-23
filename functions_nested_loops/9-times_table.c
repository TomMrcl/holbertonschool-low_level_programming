#include "main.h"
/**
 * times_table - Affiche la table de multiplication de 9
 *
 * Description: Cette fonction affiche la table de multiplication
 * de 9 en format 10x10, de 0 à 9, avec les bons espacements.
 *
 * Return: rien
 */
void times_table(void)
{
int number = 0;
int multiple;
int resultat;
while (number < 10)
{
multiple = 0;
while (multiple < 10)
{
resultat = number * multiple;
if (multiple == 0)
_putchar(resultat + '0');
else
{
_putchar(',');
_putchar(' ');
if (resultat < 10)
_putchar(' ');
else
_putchar((resultat / 10) + '0');
_putchar((resultat % 10) + '0');
}
multiple++;
}
_putchar('\n');
number++;
}
}
