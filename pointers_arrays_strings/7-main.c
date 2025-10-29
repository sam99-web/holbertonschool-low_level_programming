#include "main.h"
#include <stdio.h>

/**
 * main - check the code for leet function
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello, Holberton School! Let's code in 1337.";

	printf("%s\n", str);
	leet(str);
	printf("%s\n", str);

	return (0);
}
