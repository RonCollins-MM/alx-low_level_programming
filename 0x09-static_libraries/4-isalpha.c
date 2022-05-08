#include "main.h"

/**
 * _isalpha - checks if character is letter, uppercase or lower
 * @c: The character to be checked
 *
 * Return: 1 if uppercase or lowercase letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
