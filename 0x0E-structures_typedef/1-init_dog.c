#include <stdio.h>
#include "dog.h"
/**
 * init_dog - A function that initialises a struct
 * @d: Pointer to the struct to initialise
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit();

	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
