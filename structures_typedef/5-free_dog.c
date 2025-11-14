#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libère la mémoire allouée pour une instance de dog_t.
 *
 * @d: pointeur vers l'instance de dog_t à libérer.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
