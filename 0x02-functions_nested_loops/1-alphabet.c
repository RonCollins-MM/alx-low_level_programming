#include "main.h"

/**
 *print_alphabet - prints the letters of the alphabet in small caps
 *and then a newline.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

}
