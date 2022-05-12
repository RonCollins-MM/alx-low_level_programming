#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers passed as arguments
 * @argc: Count of the arguments passed
 * @argv: Array of the arguments passed
 *
 * Return: EXIT_SUCCESS if successful, 1 if not
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("%s\n","Error");
		return (1);
	}
	return (EXIT_SUCCESS);
}
