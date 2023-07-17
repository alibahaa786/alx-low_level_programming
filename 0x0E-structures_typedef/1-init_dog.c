#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function
 * @d: name
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Null
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
