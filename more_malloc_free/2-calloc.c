#include "main.h"

/**
 * _calloc - allocates memory for an array, initialized to zero
 * @nmemb: number of elements
 * @size: size in bytes of each element
 *
 * Description: Allocates memory for an array of nmemb elements of size bytes.
 * The allocated memory is initialized to zero. If nmemb or size is 0,
 * or if malloc fails, the function returns NULL.
 *
 * Return: Pointer to allocated memory (zeroed) or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int total, i;

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
