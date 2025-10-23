#include "main.h"
/**
 * _isalpha - Vérifie si un caractère est une lettre
 * @c: le caractère à tester
 *
 * Return: 1 si c est une lettre, 0 sinon
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
