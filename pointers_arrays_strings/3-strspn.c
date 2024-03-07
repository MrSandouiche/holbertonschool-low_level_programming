#include "main.h"

/**
 * _strspn - Calcule la longueur d'un préfixe de sous-chaî
 * @s: La chaîe a analys�
 * @accept: La sous-chaîne contenant les caractères accept
 *
 * Description : Cette fonction retourne le nombre d'octets
 *
 * Retour: Le nombre d'octets dans le segment initial de s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
	int found = 0;

	for (int i = 0; accept[i]; i++)
{
	if (*s == accept[i])
	{
	found = 1;
	count++;
	break;
	}
	}
	if (!found)
	break;
	s++;
}
return (count);
}
