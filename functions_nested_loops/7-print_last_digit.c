#include "main.h"
/**
 * print_last_digit - print le dernier chiffre avec modulo
 * @n: le nombre que j'imprime
 *
 * Return: le dernier nombre de n
 */

	int print_last_digit(int n)
{
		int last_digit;

	last_digit = n % 10;

		if (last_digit < 0)
			last_digit = -last_digit;

		_putchar('0' + last_digit);

		return (last_digit);

}
