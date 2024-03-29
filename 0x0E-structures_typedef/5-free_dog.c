#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - entry point
 * @d: entry structure
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
