#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - fonction qui exec la fonction donn√©en tant que param√tr
 * @array: pointeur du tableau
 * @size: taille du tableau
 * @action: ???
 * Return: le code
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
