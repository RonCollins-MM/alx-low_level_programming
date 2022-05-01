#include "main.h"
/**
 * _puts_recursion - Prints a string passed into it recursively
 * @s: The sring to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}
