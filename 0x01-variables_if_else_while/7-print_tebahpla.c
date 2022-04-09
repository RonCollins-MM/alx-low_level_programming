#include <stdio.h>

/**
  * main - Entry point
  * Will print alphabets from 'z' to 'a'
  *
  * Return: 0 (always success)
  */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
