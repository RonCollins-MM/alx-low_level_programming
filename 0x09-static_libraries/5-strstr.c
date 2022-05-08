#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: The larger string array to look through
 * @needle: The substring to find
 *
 * Return: Pointer to beginning of located substring, NULL (0) if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *found = 0;
	int i;

	i = 0;
	found = next_char(needle, haystack);
	if (found == 0)
	{
		return (0);
	}
	else
	{
		while (*(needle + i) == *(found + i))
		{
			i++;
			if (*(needle + i) == '\0')
				return (found);
		}
		_strstr(found, needle);
	}
	return (found);
}

/**
 * next_char - A function that finds the next character in the haystack
 *	that matches the firs character of the needle.
 * @needle: The string to be looked for
 * @haystack: The array of chars to search in
 *
 * Return: Pointer to next identified char, NULL (0) if not found
 */
char *next_char(char *needle, char *haystack)
{
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
			return (haystack);

		haystack++;
	}
	return (0);
}
