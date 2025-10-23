#include "main.h"
/**
 * _islower - Vérifie si un caractère est en minuscule
 * @c: le caractère à tester
 *
 * Return: 1 si c est une lettre minuscule, 0 sinon
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
