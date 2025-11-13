/* malloc_checked.c */
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire avec malloc et vérifie l'échec
 * @b: nombre d'octets à allouer
 *
 * Description: Alloue @b octets à l'aide de malloc. Si malloc retourne NULL,
 * la fonction termine immédiatement le processus avec le statut 98.
 * Retourne un pointeur vers la zone mémoire allouée en cas de succès.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
