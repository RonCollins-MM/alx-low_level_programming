#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: ASCII decimal number of the character to be checked
 *
 * Return: 0 if lowercase, 1 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
