#include <stdio.h>

/**
  * main - Entry point
  * Will print single digit base10 numbers from '0'
  *
  * Return: 0 (always success)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
