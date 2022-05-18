#include "variadic_functions.h"
/**
 * sum_them_all - Sums all the parameters passed to it
 * @n: The number of arguments
 *
 * Return: Sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(valist, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}

	va_end(valist);
	return (sum);
}
