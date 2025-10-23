#include "main.h"
/**
 * _abs - Calcule la valeur absolue d’un entier
 * @c: L’entier dont on veut obtenir la valeur absolue
 *
 * Return: La valeur absolue de l’entier donné
 */
int _abs(int c)
{
if (c < 0)
{
return (c * -1);
}
else
{
return (c);
}
}
