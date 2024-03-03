/**
 * _strncpy - Copie une chaîne de caractè
 * @dest: Chaîne de destination où copier les caractè
 * @src: Chaîne sourc
 * @n: Nombre maximal de caractère copier depuis src
 *
 * Description: Cette fonction copie au plus n
 *
 * Return: Un pointeur vers la chaîne de destination (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)

	dest[i] = src[i];


	for ( ; i < n; i++)

	dest[i] = '\0';

	return (dest);
}
