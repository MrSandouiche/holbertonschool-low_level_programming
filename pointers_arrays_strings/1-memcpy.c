#include "main.h"

/**
* _memcpy - Copie une zone de mémoire.
* @dest: Destination.
* @src: Source.
* @n: Taille a copier.
*
* Description: Copie les octets de src vers dest.
*
* Return: Pointeur vers la destination.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
}
