#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    print_number(-0000);
    _putchar('\n');
    
    for (i = -1; i > -1000000000; i *= 10)
    {
	   print_number(i);
	  _putchar('\n');
    } 
    return (0);
}
