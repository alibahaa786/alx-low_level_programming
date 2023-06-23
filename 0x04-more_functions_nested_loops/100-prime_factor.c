#include <stdio.h>

/**
 * main - print largest prime number
 * Return: 0
*/

int main(void)
{
	long i = 612852475143;
	int div = 2;
	int max;

	while (i != 1)
	{
		if (i % div == 0)
		{
			i /= div;
			max = div;
		}
		else
		{
			div += 1;
		}
	}
	printf("%d\n", max);
	return (0);
}
