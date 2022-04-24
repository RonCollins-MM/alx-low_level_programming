#include "main.h"
/**
 * times_table - Prints the multiplication table of 9.
 *
 *Description: The format should appear as below:
 * 0,  0,  0,  0,  0,  0,  0,  0,  0,  0
 * 0,  1,  2,  3,  4,  5,  6,  7,  8,  9
 * 0,  2,  4,  6,  8, 10, 12, 14, 16, 18
 * 0,  3,  6,  9, 12, 15, 18, 21, 24, 27
 * 0,  4,  8, 12, 16, 20, 24, 28, 32, 36
 * 0,  5, 10, 15, 20, 25, 30, 35, 40, 45
 * 0,  6, 12, 18, 24, 30, 36, 42, 48, 54
 * 0,  7, 14, 21, 28, 35, 42, 49, 56, 63
 * 0,  8, 16, 24, 32, 40, 48, 56, 64, 72
 * 0,  9, 18, 27, 36, 45, 54, 63, 72, 81
 */
void times_table(void)
{
	int n_row, n_col, ones, tens, product;

	for (n_row = 0; n_row <= 9; n_row++)
	{
		for (n_col = 0; n_col <= 9; n_col++)
		{
			product = n_row * n_col;

			if (product > 9)
			{
				ones = product % 10;
				tens = product / 10;

				_putchar(tens + '0');
				_putchar(ones + '0');
				if (n_col != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar(product + '0');
				if (n_col != 9)
				{
					_putchar(',');
					_putchar(' ');

					if ((n_row * (n_col + 1)) < 10)
					{
					_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
