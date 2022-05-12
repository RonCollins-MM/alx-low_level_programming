#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments in terminal
 * @argc: Count of the arguments passed
 * @argv: Array of the arguments passed
 *
 * Return: 0 if no arguments passed, 1 if any argument passed is not a number
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (!atoi(argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (EXIT_SUCCESS);
}
