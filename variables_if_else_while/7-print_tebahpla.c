#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char number = 122;
while (number > 96)
{
putchar(number);
number--;
}
putchar('\n');
return (0);
}
