#include "main.h"
/**
 * factorial - Function that finds the factorial of a number
 * @n: The operand
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
