#include "main.h"

/**
 * _atoi - Convertit une chaîn en entie
 * @s: La chaîe a convertir
 *
 * Return: La valeur entière convertie de la chaîn
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;


	while (s[i] == ' ')
	i++;


	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
	num = num * 10 + (s[i] - '0');
	i++;
	}

	return (sign * num);
}
