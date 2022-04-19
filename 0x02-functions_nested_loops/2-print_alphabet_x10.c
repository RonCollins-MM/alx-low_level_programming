#include "main.h"

/**
 *print_alphabet_x10 - prints the letters of the alphabet in small caps
 *10 times and then a newline.
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
