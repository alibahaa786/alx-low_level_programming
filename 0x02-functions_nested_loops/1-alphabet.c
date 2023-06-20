#include <stdio.h>
#include "main.h"

/**
 * main - print lowercase alphabet
 * Return: 0 if executed properly
*/

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print alphabet
 * Return: null
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
}
