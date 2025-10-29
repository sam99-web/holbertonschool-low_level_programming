#include "main.h"
#include <stdio.h>

/**
 * main - check the code for reverse_array function
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	n = sizeof(a) / sizeof(int);
	print_array(a, n);
	printf("\n");
	reverse_array(a, n);
	print_array(a, n);
	printf("\n");
	return (0);
}
