#include "main.h"
/**
 * _puts - A function that prints a string followed by a newline
 * into stdout
 * @str: The string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
