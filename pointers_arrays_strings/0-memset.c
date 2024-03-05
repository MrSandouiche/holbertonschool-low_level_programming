#include "main.h"
#include <string.h>

/**
 * _memset - Remplit la mémoire avec un octet constnt.
 * @s: Pointeur vers la mémoirea remplir.
 * @b: Octet a copier dans la mémoire.
 * @n: Nombre d'octets a remplir.
 *
 * Description: Cette fonction remplit les n premiers octets.
 *
 * Return: Un pointeur vers la zone mémoire s.
 */


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
