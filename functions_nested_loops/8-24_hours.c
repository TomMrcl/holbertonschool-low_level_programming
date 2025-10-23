#include "main.h"

/**
 * jack_bauer - Affiche chaque minute de la journée de Jack Bauer
 *
 * Description: Utilise des boucles while pour afficher toutes les heures
 * et minutes de 00:00 à 23:59, chaque horaire sur une nouvelle ligne.
 *
 * Return: rien
 */
void jack_bauer(void)
{
int hour = 0;
int minute;
while (hour < 24)
{
minute = 0;
while (minute < 60)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
minute++;
}
hour++;
}
}
