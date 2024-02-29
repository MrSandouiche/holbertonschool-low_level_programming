#include "main.h"

/**
 * print_sign - imprime le nom de la variable ?
 * @n: la valeur du n
 *
 * Return: 1 si le nombre est au dessus de zero
 *         0 si le nombre est zero
 *         -1 si le nombre est end essous de zero
 */


int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
