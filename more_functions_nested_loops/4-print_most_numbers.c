#include "main.h"
/**
* print_most_numbers - �a print les nombres
*
* Description: Ãa fait que Ãa imprimdes nombres sans le 2 et 4 .
*
* Return: �a retourne
*
*/




void print_most_numbers(void)
{
	char y;

	for (y = 48; y <= 57; y++)
	{
	if (y != 50 && y != 52)
	{
		_putchar(y);
	}
	}
	_putchar('\n');
}
