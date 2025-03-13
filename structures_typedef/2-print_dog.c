#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints the members of structure
 * @d: pointer to structure
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");

	if (d->name == NULL || d->owner == NULL)
		printf("(nil)");
	else
	{
		printf("Name : %s\n", d->name);
		printf("Age : %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
