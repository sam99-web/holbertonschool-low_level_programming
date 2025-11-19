#include <stdio.h>
#include "function_pointers.h"

/**
 * is_positive - returns 1 if n is positive, 0 otherwise
 * @n: integer to check
 *
 * Return: 1 if n > 0, 0 otherwise
 */
int is_positive(int n)
{
	return (n > 0);
}

/**
 * main - test int_index function
 *
 * Return: 0
 */
int main(void)
{
	int array[] = {-5, -2, 0, 4, 10};
	int index;

	index = int_index(array, 5, is_positive);
	printf("First positive index: %d\n", index); /* Expected: 3 */

	return (0);
}
