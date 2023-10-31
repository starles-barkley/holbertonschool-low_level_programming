#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog structure and its fields
 * @d: Pointer to the dog structure
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
