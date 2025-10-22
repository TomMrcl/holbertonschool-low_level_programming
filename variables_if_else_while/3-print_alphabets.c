#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
ch = 'A';
while (ch <= 'Z')
{
putchar(ch);
ch++;
}
printf("\n");
return (0);
}
