#include "main.h"
/**
 * times_table - prints the times table of 9, including 0
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			_putchar(product);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
