#include "main.h"

/**
 * jack_bauer - print every minute
 * Return: Null
*/

void jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;

	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 9; h++)
		{
			for (M = 0; M <= 5; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (H == 2 && h == 4)
						return;
					_putchar('0' + H);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + M);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
