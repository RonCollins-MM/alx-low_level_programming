#include "main.h"

/**
 *main - prints the letters of the alphabet in small caps
 *and then a newline.
 *
 *Return: 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

	return (0);
}
