#include <stdio.h>
#include "dog.h"

/**
 * print_dog - affiche les informations d'une structure dog
 * @d: pointeur vers la structure dog à afficher
 *
 * Return: rien
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
