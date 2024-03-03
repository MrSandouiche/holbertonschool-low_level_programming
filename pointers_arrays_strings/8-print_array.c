#include <stdio.h>

/**
 * print_array - Imprime les n premiers éléments d'un tableau d'entie
 * @a: Le tableau d'entiers.
 * @n: Le nombre d'élémen
 */

void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
	return;

	for (; n > 0; n--)
	{
	printf("%d", *a);


	if (n > 1)
	printf(", ");

	a++;
	}

	printf("\n");
}
