#include <stdio.h>

/**
  * main - Entry point
  * Will print alphabets from 'a' to 'z'
  * except 'q' and 'e'
  *
  * Return: 0 (always success)
  */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
