#include "main.h"
/**
 * jack_bauer - A function that prints the seconds of a day 
 * 	from "00:00" to "23:59"
 */
void jack_bauer(void)
{
	int H_tens, H_ones, M_tens, M_ones;
	
	char colon = ':';

	for (H_tens = '0'; H_tens < '3'; H_tens++)
	{
		for (H_ones = '0'; H_ones < '4'; H_ones++)
		{
			for (M_tens = '0'; M_tens < '6'; M_tens++)
			{
				for (M_ones = '0'; M_ones <= '9'; M_ones++)
				{
					_putchar(H_tens);
					_putchar(H_ones);
					_putchar(colon);
					_putchar(M_tens);
					_putchar(M_ones);
					_putchar('\n');
				}
			}
		}
	}
}
