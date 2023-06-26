#include <stdio.h>
#include <string.h>

/**
 * printchar - print str
 * Return: null
*/

void printchar(void)
{
	int str = "_putchar";
	int i;

	for (i = 0; i <= strlen(str); i++)
		putchar(str[i]);
	putchar('\n');
}

/**
 * main - print _putchar
 * Return: 0 is executed properly
 * otherwise non-zero
*/

int main(void)
{
	printchar();
	return (0);
}

