#include "main.h"

/**
 * _abs - Computes the absolute value of a number
 * @n: The number whose absolute value is to be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	if (n < 0)
	{
		return (0 - n);
	}

	return (0);
}
