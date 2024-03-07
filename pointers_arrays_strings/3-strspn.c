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
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
