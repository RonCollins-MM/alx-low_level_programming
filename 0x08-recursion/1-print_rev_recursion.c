#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		while (*s != '\0')
		{
			_putchar(*s);
			s--;
		}
		return;
	}
	else
	{
		_print_rev_recursion((s + 1));
	}
}
