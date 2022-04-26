#include "main.h"
/**
 * *_memset - Fills the first n bytes of the memory area pointed by
 * 	s with the constant byte b.
 * @s: Address of the memory area
 * @b: The constant byte to replace memory area
 * @n: The amount of bytes to be replaced
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	
	return (s);
}
