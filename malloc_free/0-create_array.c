#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères et l'initialise avec un char.
 * @size: taille du tableau à créer.
 * @c: caractère utilisé pour initialiser le tableau.
 *
 * Return: pointeur vers le tableau, ou NULL si size == 0 ou échec malloc.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
