#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - fonction qui return le sum
 * @n: 1ere valeur
 *
 * * Return: toujours le result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list suma;
	unsigned int count = 0;
	unsigned int result = 0;

	if (n == 0)
		return (0);
	va_start(suma, n);
	for (; count < n; count++)
	{
		result += va_arg(suma, int);
	}
	va_end(suma);
	return (result);
}
