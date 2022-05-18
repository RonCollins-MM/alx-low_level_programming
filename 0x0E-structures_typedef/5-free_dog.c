#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees memory of struct dog
 * @d: the Struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
