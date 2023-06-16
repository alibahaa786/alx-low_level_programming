#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - detect whether number is +ve or -ve
 * Return: 0 if executed correctly,
 * otherwise non-zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
