#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - crée une nouvelle instance de dog_t.
 *
 * @name: nom du chien.
 * @age: age du chien.
 * @owner: nom du proprietaire du chien.
 *
 * Return: pointeur vers la nouvelle instance de dog_t, ou NULL erreur.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n_copy, *o_copy;
	int len1 = 0, len2 = 0, i;

	if (!name || !owner)
		return (NULL);

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	n_copy = malloc(len1 + 1);
	o_copy = malloc(len2 + 1);
	if (!n_copy || !o_copy)
	{
		free(n_copy);
		free(o_copy);
		free(d);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		n_copy[i] = name[i];
	n_copy[len1] = '\0';

	for (i = 0; i < len2; i++)
		o_copy[i] = owner[i];
	o_copy[len2] = '\0';

	d->name = n_copy;
	d->age = age;
	d->owner = o_copy;

	return (d);
}
