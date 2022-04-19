#include "main.h"

/**
 * print_sign - Check if a number is positive, negative or zero
 * @n: The number to be checked
 *
 * Description: After checking, will print the sign of the number (using
 * _putchar) and a corresponding return value.
 * Return: 1 (positive number), 0 (zero), -1 (negative number)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	_putchar(48);
	return (0);
}
