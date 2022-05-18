#include "main.h"
/**
 * array_range - Creates an array of integers in a specified range
 * @min: Lower bound of range
 * @max: upper bound of range
 *
 * Return: pointer to memory area, NULL if failed.
 */
int *array_range(int min, int max)
{
	int *dmem, i = 0, elem;

	if (min > max)
		return (NULL);
	dmem = malloc((max - min + 1) * sizeof(int));

	if (dmem == NULL)
		return (NULL);

	elem = min;
	while (i <= max - min)
		dmem[i++] = elem++;

	return (dmem);
}
