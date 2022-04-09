#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Will print all numbers in base16 in lowercase
  * plus a newline
  *
  * Return: 0 (always success)
  */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
