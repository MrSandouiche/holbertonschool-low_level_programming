#include <unistd.h>

/**
 * _puts - Imprime une chaîne suivie d'une nouvelle ligne.
 * @str: La chaîn a imprimer.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	write(1, str, 1);
	str++;
	}
	write(1, "\n", 1);
}
