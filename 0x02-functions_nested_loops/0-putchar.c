#include <stdio.h>
#include <string.h>

/**
 * printstr - print _putchar
 * Return: null
*/

void printstr(void)
{
	char str[] = "_putchar";
	int i;
	int strsize;

	strsize = strlen(str);
	for (i = 0; i <= strsize; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

/**
 * main - execute printstr
 * Return: o if executed properly
*/

int main(void)
{
	printstr();
	return (0);
}
