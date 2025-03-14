#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the dog (memory)
 * @d : dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
