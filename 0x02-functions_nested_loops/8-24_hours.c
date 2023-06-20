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
					if (H == 2 && h == 3 && M == 5 && m == 9)
						return;
					_putchar(H);
					_putchar(h);
					_putchar(M);
					_putchar(m);
				}
			}
		}
	}
	_putchar('\n');
}
