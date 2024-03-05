#include "main.h"

/**
 * _memcpy - Copie une zone de mémoi
 * @dest: Pointeur vers la zone de mémoire de destinatio
 * @src: Pointeur vers la zone de mémoire sour
 * @n: Nombre d'octets a copier
 * Description: Cette fonction copie les octets de la zone m�moire point�e
 * Retour: Pointeur vers la zone de mémoir a destinatio
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
