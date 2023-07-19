#include <stdio.h>
#include "calc.h"
#ifndef FUNCTIONS
#define FUNCTIONS
/**
 * op_add - function
 * @a: int
 * @b: int
 * Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function
 * @a: int
 * @b: int
 * Return: sub
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function
 * @a: int
 * @b: int
 * Return: multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fiunction
 * @a: int
 * @b: int
 * Return: division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function
 * @a: int
 * @b: int
 * Return: modulus
*/

int op_mod(int a, int b)
{
	return (a % b);
}
#endif
