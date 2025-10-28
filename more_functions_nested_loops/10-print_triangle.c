#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: the size of the triangle
 *
 * Description: Prints a triangle followed by a new line.
 * If size is 0 or less, only a new line is printed.
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
