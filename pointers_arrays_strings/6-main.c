#include "main.h"
#include <stdio.h>

/**
 * main - check the code for cap_string function
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "hello world! welcome to holberton school. let's code better.";

	printf("%s", str);
	cap_string(str);
	printf("%s", str);

	return (0);
}
