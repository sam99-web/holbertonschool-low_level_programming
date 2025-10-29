#include "main.h"
#include <stdio.h>

/**
 * main - check the code for string_toupper function
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Holberton School!\nThis is a test String 123.";

	printf("%s", str);
	string_toupper(str);
	printf("%s", str);

	return (0);
}
