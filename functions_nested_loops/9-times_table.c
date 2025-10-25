#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: prints a formatted multiplication table from 0 to 9.
 * Each number is separated by a comma and a space, and properly aligned.
 */
void times_table(void)
{
	int row, col, prod;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;

			if (col == 0)
			{
				_putchar(prod + '0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

