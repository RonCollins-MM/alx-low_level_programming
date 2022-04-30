#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: Address of the first character of the string
 * @c: The character to be looked for
 *
 * Return: The address of character if found, NULL if character  not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
