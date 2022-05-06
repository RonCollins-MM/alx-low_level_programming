#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that duplicates a string into a dynamically
 *	created memory area
 * @str: The string to be copied
 *
 * Return: Pointer to the duplicated string
 **/
char *_strdup(char *str)
{
	char *dstr;
	int strlength, i;

	if (!str)
		return (NULL);

	strlength = _strlen(str);
	dstr = malloc((sizeof(char) * strlength) + 1);
	if (!dstr)
		return (NULL);

	i = 0;
	while (i < strlength)
	{
		dstr[i] = str[i];
		i++;
	}
	dstr[strlength] = '\0';
	return (dstr);
}

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
