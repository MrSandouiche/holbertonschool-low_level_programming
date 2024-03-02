#include "main.h"

/**
 * print_diagonal - print en diagonal
 * @n: la diagonal
 *
 * Return: rien
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
