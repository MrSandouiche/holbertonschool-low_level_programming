#include <stdio.h>
/**
 * swap_int - echange les valeurs
 * @a: Pointeur vers le premier entier.
 * @b: Pointeur vers le deuxième entier.
 *
 * Description : echange les valeurs
 */









void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
