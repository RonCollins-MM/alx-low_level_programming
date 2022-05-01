#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of the numbers along the two 
 *	diagonals in a square matrix
 * @a: Pointer to the first int in the square matrix
 * @size: Length of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0, i, j = 0;
	
	for (i = 0; i < (size * size); i += ((size + 1) * j))
	{
		s1 += *(a + i);
		j++;
		i = 0;
	}
	for (i = size - 1; i < (size * size) - 1; i += size - 1)
	{
		s2 += *(a + i);
	}

	printf("%d, %d\n", s1, s2);
}
