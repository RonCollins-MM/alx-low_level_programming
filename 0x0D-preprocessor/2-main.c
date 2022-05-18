#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the file it was compiled from
 *
 * Return: 0 (Always success)
 */
int main()
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
