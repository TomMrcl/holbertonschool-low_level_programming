#include <stdio.h>
#include "dog.h"

/**
 * print_dog - affiche les informations d'un chien.
 *
 * @d: pointeur vers la structure dog à afficher.
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Dog is NULL\n");
		return;
	}

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %.6f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
