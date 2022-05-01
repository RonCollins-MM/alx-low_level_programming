#include "main.h"
/**
 * _strlen_recursion - Finds the length of a string recursively
 * @s: The string whose length is to be found
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
