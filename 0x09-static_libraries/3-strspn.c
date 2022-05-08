#include "main.h"
/**
 * _strspn - A function that gets the length in bytes of
 * the initial contiguous segment of a string that matches
 * specified characters.
 * @s: The string to be searched
 * @accept: The character set to be matched
 *
 * Return: Length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c, b;

	c = 0;
	b = c;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				c++;
		}
		if (c > b)
		{
			b = c;
		}
		else
		{
			break;
		}
	}
	return (c);
}
