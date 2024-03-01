#include "main.h"
/**
* print_most_numbers - Ãa print les nombres
*
* Description: Ãƒa fait que Ãƒa imprimdes nombres sans le 2 et 4 .
*
* Return: Ãa retourne
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
