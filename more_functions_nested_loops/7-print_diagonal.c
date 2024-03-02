#include "main.h"

/**
 * print_diagonal - Imprime une diagonale de caractèe
 * @n: Longueur de la diagonale.
 *
 * Return: Aucun.
 */
void print_diagonal(int n)
{
	int i, e;

	if (n <= 0)

	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (e = 0; e < i; e++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
