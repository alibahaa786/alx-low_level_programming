#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function
 * @str: string
 * Return: integer
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	}
	return (i);
}

/**
 * _strcpy - function
 * @dest: destination
 * @src: source
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	
	if (!name || age < 0 || !owner)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
