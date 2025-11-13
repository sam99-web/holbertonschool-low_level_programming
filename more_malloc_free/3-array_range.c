#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Description: Allocates memory for an array of integers containing all
 * values from min to max inclusive. Returns NULL if min > max or if
 * malloc fails.
 *
 * Return: pointer to newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
