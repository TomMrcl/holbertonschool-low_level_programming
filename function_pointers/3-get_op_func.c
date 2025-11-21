#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_op_func - fonction qui retourne un pointeur
 * vers la fonction correspondant a l'operateur
 * passee en parametre
 *
 * @s: operateur sous forme de chaine de caracteres
 *
 * Return: pointeur vers la fonction correspondante
 * ou NULL si l'operateur n'est pas reconnu
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
