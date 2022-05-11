#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: A count of the parameters passed in terminal
 * @argv: The string value of the parameters passed
 *
 * Return: 0 (Always success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
