#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: The string to be printed
 *
 * Description - First finds the length of the string using '_strlen'
 *	function defined below, then prints in reverse.
 */
void print_rev(char *s)
{
	int strlength = _strlen(s);
	int i;

	for (i = strlength; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
/**
 * _strlen - A function that finds the length of a string
 * @s: The string whose length is to be found
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		length += 1;
	}

	return (length);
}
