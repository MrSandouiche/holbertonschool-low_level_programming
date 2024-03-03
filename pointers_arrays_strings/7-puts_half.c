#include "main.h"

/**
 * puts_half - Imprime la moitié d'une chaîne de caractè
 * @str: La chaîne à imprim
 */
void puts_half(char *str)
{
	int length = 0;
	int half;
	int i;

	while (str[length] != '\0')
	{
	length++;
	}

	half = (length + 1) / 2;

	for (i = half; i < length; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
