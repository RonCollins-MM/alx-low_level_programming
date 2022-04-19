#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: 0 (success)
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = 0 - n;

	ld = n % 10;
	_putchar(ld);

	return (ld);
}
