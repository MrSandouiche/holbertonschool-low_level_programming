#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fonction qui free le chien
 * @d: pointeur d
 *
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
