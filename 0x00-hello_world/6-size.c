#include <stdio.h>

/**
 * main - Entry point
 * printf function implementation
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d\n byte(s)", (int)sizeof(char));
	printf("Size of int: %d\n byte(s)", (int)sizeof(int));
	printf("Size of long int: %d\n byte(s)", (int)sizeof(long int));
	printf("Size of long long int: %d\n byte(s)", (int)sizeof(long long int));
	printf("Size of float: %d\n bytes(s)", (int)sizeof(float));
	return (0);
}
