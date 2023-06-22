#include <stdio.h>

/**
 * main - fizz buzz
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		if (i % 3 == 0)
			printf ("Fizz");
		else if (i % 5 == 0)
			printf ("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf ("Fizz Buzz");
		else
			printf ("%d", i);
		if (i < 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
