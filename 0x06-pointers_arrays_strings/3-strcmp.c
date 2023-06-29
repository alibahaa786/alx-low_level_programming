#include "main.h"

/**
 * _strcmp - function
 * @s1: pointer
 * @s2: pointer
 * Return: difference between s1 and s2
*/

int _strcmp(char *s1, char *s2)
{
	int val_s1 = 0;
	int val_s2 = 0;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		val_s1 += s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		val_s2 += s2[i];
	return (val_s1 - val_s2);
}
