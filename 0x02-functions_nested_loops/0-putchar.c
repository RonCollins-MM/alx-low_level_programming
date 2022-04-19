#include "main.h"

/**
 * main - prints the chararacter string '_putchar' using a non
 * non-standard function.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char put_string[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put_string[i]);
	}
	_putchar('\n');

	return (0);
}
