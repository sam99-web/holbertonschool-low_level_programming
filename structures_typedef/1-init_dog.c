#include "dog.h"
#include <stddef.h> /* for NULL */

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner to assign to the dog
 *
 * Description: This function initializes the members of a struct dog
 * with the values provided by the caller. If the pointer d is NULL,
 * the function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
