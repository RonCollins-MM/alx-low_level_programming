#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Function that concatenates two strings into a dynamically
 *	allocated memory area
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *catstr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	catstr = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (!catstr)
		return (NULL);

	if (len1 == 0 && len2 == 0)
	{
		catstr[0] = '\0';
	}
	else if (len2 == 0)
	{
		for (i = 0; i < len1; i++)
			catstr[i] = s1[i];

		catstr[len1] = '\0';
	}
	else if (len1 == 0)
	{
		for (i = 0; i < len2; i++)
			catstr[i] = s2[i];

		catstr[len2] = '\0';
	}
	else
	{
		for (i = 0; i < len1; i++)
			catstr[i] = s1[i];

		for (i = 0; i < len2; i++)
			catstr[len1 + i] = s2[i];

		catstr[len1 + len2] = '\0';
	}
	return (catstr);
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
