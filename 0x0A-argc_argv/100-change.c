#include <stdio.h>
#include <stdlib.h>

int main(int argc, **argv)
{
	int cents, coins;

	coins = 0;
	cents = atoi(argv[1]);
	if (argc > 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argv[1] < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		if (cents / 25 >= 1)
		{
			coins += cents / 25;
			if (cents % 25 == 0)
			{
				printf("%d\n", coins);
				return (EXIT_SUCCESS);
			}
		}
	}
}
