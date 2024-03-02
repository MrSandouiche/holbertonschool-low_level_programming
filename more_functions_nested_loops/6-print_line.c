#include "main.h"

/**
* print_line - Imprime une ligne composée de caractèr
* @n: Nombre de caractère imprimer dans la ligne.
*
* Return: Aucun
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
