#include "main.h"

/**
* _strpbrk -  Recherche une chaîn
* @s: Pointeur vers la chaînea rechercher.
* @accept: Tableau d'octets a rechercher.
* Return: Un pointeur vers l'octet dans s qui correspond
*
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
