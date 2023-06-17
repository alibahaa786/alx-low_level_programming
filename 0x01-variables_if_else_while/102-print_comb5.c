#include <stdio.h>

/**
 * main - print combinations of
 * double double digits
 *Return: 0 if executed properly
 *otherwise non-zero
*/

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				k = i + 1;
				l = 0;
			}
			else
			{
				k = i;
				l = j + 1;
			}
			for (; k <= 9; k++)
			{
				for (; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (!(i == 9 && j == 8))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}

