#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes elements to '0'
 * @nmemb: Number of elements in array
 * @size: Size in bytes of array
 *
 * Return: Pointer to memory area
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *dmem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	dmem = malloc(nmemb * size);

	if (dmem == NULL)
		return (NULL);

	_memset(dmem, 0, (nmemb * size));
	return (dmem);
}

/**
 * _memset - Fills the first n bytes of the memory area pointed by
 *	s with the constant byte b.
 * @s: Address of the memory area
 * @b: The constant byte to replace memory area
 * @n: The amount of bytes to be replaced
 *
 * Return: Pointer to altered memory area
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
