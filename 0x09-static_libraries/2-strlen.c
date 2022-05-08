#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: Address to the base index of the string
 *
 * Return: length of the string
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
