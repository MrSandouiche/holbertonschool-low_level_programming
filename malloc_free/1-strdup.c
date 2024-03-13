#include <stdlib.h>
#include "main.h"
#include <string.h>


char *_strdup(char *str)
{
	char *a;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
