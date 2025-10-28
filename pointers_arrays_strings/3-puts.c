#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to the string to print
 *
 * Description: Uses _putchar to output each character of the string
 * followed by a newline character.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
