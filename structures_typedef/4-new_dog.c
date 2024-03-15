#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - fonction qui creer un chien
 * @name: valeur 1
 * @age: valeur 2
 * @owner: valeur 3
 *
 * Return: pointeur
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}
	p->name = malloc(sizeof(char) * (i + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = malloc(sizeof(char) * (j + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		p->name[k] = name[k];
	}
	for (k = 0; k <= j; k++)
	{
		p->owner[k] = owner[k];
	}
	return (p);
}
