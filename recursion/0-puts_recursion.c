#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* base case: end of string -> print newline and stop */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* print current character and recurse for the rest */
	_putchar(*s);
	_puts_recursion(s + 1);
}
