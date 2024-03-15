#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - fonction qui initialise la variable chien
 * @d: pointeur
 * @name: nom
 * @age: age
 * @owner: propriétaire
 *
 * Return: d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
