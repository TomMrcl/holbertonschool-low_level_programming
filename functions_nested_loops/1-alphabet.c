#include "main.h"
/**
 * print_alphabet - affiche l'alphabet en minuscules suivi d'une nouvelle ligne
 *
 * Return: rien
 */
void print_alphabet(void)
{
char ch = 97;
while (ch <= 122)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
