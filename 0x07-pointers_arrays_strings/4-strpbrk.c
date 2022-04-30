#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The character set to be matched to
 *
 * Return: Address of the first matched character
 */
char *_strpbrk(char *s, char *accept)
{
	char *frocc = 0;
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (&s[i]);
		}
	}
	return (frocc);
}
