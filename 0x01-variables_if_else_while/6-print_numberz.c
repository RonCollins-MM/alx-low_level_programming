#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Will print single digit base10 numbers from '0'
  *
  * Return: 0 (always success)
  */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar((char)num);
	putchar('\n');
	return (0);
}
