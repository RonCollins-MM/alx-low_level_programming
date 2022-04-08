#include <stdio.h>

/**
  * main - Entry point
  * Will print single digit base10 numbers from '0'
  *
  * Return: 0 (always success)
  */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
