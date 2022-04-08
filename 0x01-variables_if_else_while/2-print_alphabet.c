#include <stdio.h>

/**
  * main - Entry point
  * Will print alphabets from 'a' to 'z'
  *
  * Return: 0 (always success)
  */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
