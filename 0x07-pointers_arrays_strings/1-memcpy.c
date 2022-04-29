#include "main.h"

/**
 * _memcpy - Copies a memory area to another location
 * @dest: The destination where the data is to be copied to
 * @src: The location where the data is copied from
 * @n: The upperboud of the data to be copied from the source
 *
 * Return: The address to the new memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
