#include <stdio.h>
#include "main.h"

/**
 * main - check the code for _strcat function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "World!";
	char str3[] = " Holberton";

	_strcat(str1, str2);
	printf("%s\n", str1); /* Output: Hello, World! */

	_strcat(str1, str3);
	printf("%s\n", str1); /* Output: Hello, World! Holberton */

	return (0);
}
