#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: ASCII decimal number of the character to be checked
 *
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
