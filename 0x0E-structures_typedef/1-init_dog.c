#include <stdio.h>

/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: pointer 1.
 * @name: pointer 2.
 * @age: poppy's name.
 * @owner: pointer 3.
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
