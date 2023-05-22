#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - a struct.
 * @name: poppy's name.
 * @age: poppy's age.
 * @owner: poppy's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
