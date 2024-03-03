/**
 * _strcpy - Copie la chaîn
 * @dest: Le tampon de destination où la chaîne sercopi�
 * @src: La chaîne sourc a copier
 *
 * Return: Le pointeur vers dest.
 */





char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
	*dest++ = *src++;
	}
	*dest = '\0';

	return (temp);
}
