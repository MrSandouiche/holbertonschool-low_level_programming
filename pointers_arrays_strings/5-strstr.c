#include "main.h"

/**
* _strncmp - Compare deux chaînes dans 
* @s1: La première chaî a comparer
* @s2: La deuxième chaî
* @b: Le nombre d'octets
*
* Description : Cette fonction compare les deux chaînes s1 et s
*
* Retour : 0 si les chaînes sont identiqus
*
*/



int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;
	for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - b);
}
