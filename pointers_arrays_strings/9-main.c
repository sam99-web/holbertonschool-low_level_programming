#include <stdio.h>
#include "main.h"

/**
 * main - check the code for _strcpy function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char src1[] = "Hello, World!";
	char dest1[50];

	char src2[] = "Holberton";
	char dest2[50];

	_strcpy(dest1, src1);
	_strcpy(dest2, src2);

	printf("%s\n", dest1); /* Output: Hello, World! */
	printf("%s\n", dest2); /* Output: Holberton */

	return (0);
}
