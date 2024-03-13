#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatene 2 nombres
 * @s1: char 1
 * @s2: char 2
 *
 * Return: char concaten√
 */



char *str_concat(char *s1, char *s2)
{
	char *a;
	int i = 0, j = 0, p, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	a = malloc(k * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
	{
		a[p] = s1[p];
	}
	for (p = 0; p <= j; p++)
	{
		a[p + i] = s2[p];
	}
	return (a);
}
