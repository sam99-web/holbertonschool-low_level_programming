#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/* base case: end of string */
	if (*s == '\0')
		return (0);

	/* recursive case: 1 + length of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}
