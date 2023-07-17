#ifndef DOG
#define DOG

/**
 * struct dog - struct
 * @name: name
 * @age: age
 * @owner: owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
