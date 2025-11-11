#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string by allocating memory
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
