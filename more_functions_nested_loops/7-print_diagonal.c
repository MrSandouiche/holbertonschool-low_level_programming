#include "main.h"

/**
 * print_diagonal - Imprime une diagonale de caractères '\' de longueur spécifiée.
 * @n: Longueur de la diagonale.
 *
 * Return: Aucun.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}

