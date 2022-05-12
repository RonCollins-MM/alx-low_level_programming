#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments passed into it
 * @argc: A count of the parameters passed in terminal
 * @argv: The string value of the parameters passed
 *
 * Return: 0 (Always success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
