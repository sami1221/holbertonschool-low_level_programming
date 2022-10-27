#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a struct
 * @d: struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: nothing
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
