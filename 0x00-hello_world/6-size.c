#include <stdio.h>

/**
 * main - Entry point
 * printf function implementation
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("For this pc\n");
	printf("Size of char: %d\n", (int)sizeof(char));
	printf("Size of int: %d\n", (int)sizeof(int));
	printf("Size of long int: %d\n", (int)sizeof(long int));
	printf("Size of long long int: %d\n", (int)sizeof(long long int));
	printf("Size of float: %d\n", (int)sizeof(float));
	return (0);
}
