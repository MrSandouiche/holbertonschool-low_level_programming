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

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
