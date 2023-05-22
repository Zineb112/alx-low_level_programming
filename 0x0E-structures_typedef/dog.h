#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - a struct.
 * @name: poppy's name.
 * @age: poppy's age.
 * @owner: poppy's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif