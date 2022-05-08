#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: ASCII decimal number of the character to be checked
 *
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
