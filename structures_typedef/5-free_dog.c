#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libère la mémoire d'un dog_t
 * @d: pointeur vers la structure à libérer
 *
 * Return: rien
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
