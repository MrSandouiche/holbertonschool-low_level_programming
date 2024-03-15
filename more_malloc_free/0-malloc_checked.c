#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - fonction qui alloue la memoire
 * @b: valeur 1
 *
 * Return: pointeur
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}
