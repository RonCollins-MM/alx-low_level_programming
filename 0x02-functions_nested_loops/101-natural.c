#include <stdio.h>
/**
 * main - prints sum of of the multiples of 3 and 5 between
 * 	0 and 1024 (excluded)
 */
int main(void)
{
	int sum = 0, i = 1024;

	i--;

	for (i; i > 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d \n", sum);
}
