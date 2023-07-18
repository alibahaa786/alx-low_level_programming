#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function
 * @d: dog
 * Return: Null
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	if (d->age > 0)
		printf("Age: %5f\n", d->age);
	else
		printf("Age: (nil)");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
