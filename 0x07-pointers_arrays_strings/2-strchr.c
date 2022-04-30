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
	char *frocc = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			frocc = &s[i];
			break;
		}
	}
	return (frocc);
}
