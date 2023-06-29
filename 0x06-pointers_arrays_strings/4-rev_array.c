#include "main.h"

/**
 * reverse_array - fi=unction
 * @a: pointer
 * @n: input
 * Return: Null
*/

void reverse_array(int *a, int n)
{
	int i;
	char current;
	int len;
	
	for (len = 1; a[len] != '\0'; len++)
	{
	}
	if (n > len)
		n = len - 1;
	for (i = 0; i < n / 2; i++)
	{
		current = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = current;
	}
}
