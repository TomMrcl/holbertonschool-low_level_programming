#include "main.h"
/**
 * _atoi - convertit une chaîne en entier
 *
 * @s: pointeur vers la chaîne à convertir
 *
 * Return: entier converti
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int result = 0;
while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
i++;
while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
{
if (s[i] == '-')
	sign = -sign;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
