#include "main.h"

/**
 * main - check the code for print_array function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array1[] = {0, 1, 2, 3, 4, 5};
	int array2[] = {98, 402, 1024, 4096};
	int array3[] = {0};

	print_array(array1, 6);
	print_array(array2, 4);
	print_array(array3, 1);

	return (0);
}
