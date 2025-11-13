#include "main.h"

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements
 * @size: size in bytes of each element
 *
 * Description: Allocates memory for an array of nmemb elements of size bytes.
 * Each byte of the allocated memory is initialized to zero. Returns NULL if
 * nmemb or size is 0, or if malloc fails.
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
