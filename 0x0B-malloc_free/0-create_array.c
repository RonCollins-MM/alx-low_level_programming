#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes with specific char
 * @size: The size of array to be created
 * @c: The char to initialize with
 *
 * Return: Pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
