#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: A count of the parameters passed in terminal
 * @argv: The string value of the parameters passed
 *
 * Return: 0 (Always success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
