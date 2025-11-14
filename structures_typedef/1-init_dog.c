#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialise une structure dog.
 *
 * @d: pointeur vers la structure dog à initialiser.
 * @name: nom du chien.
 * @age: age du chien.
 * @owner: nom du proprietaire du chien.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
