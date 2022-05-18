#include "main.h"

/**
 * malloc_checked - Dynamically allocates memory of size b.
 *	Exits normally if failed.
 * @b: Size if memory
 *
 * Return: Pointer to memory allocated.
 */
void *malloc_checked(unsigned int b)
{
	void *dmem;

	dmem = malloc(b);
	if (dmem == NULL)
		exit(98);
	return (dmem);
}
