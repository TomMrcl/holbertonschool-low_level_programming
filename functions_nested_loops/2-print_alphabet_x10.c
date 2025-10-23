#include "main.h"
/**
 * print_alphabet_x10 - affiche l'alphabet en minuscules x10
 *
 * Return: rien
 */
void print_alphabet_x10(void)
{
int n = 0;
while (n < 10)
{
char ch = 97;
while (ch <= 122)
{
_putchar(ch);
ch++;
}
_putchar('\n');
n++;
}
}
