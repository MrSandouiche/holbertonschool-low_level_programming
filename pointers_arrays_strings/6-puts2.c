#include "main.h"

/**
 * puts2 - Imprime tous les caracte�res alternés d'une cine
 * @str: La chaîn
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
