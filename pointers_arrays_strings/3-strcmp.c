/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne.
 *
 * Description: La fonction compare les deux chai�nes s1 et s2
 * Return: Un entier négtif, nul, ou positf.
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
