/**
 * _strcat - Concatène deux chaînes de caractè
 * @dest: La chaîne de destinatin
 * @src: La chaîne sourc.
 *
 * Return: Un pointeur vers la chaîn
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}

	while (src[i] != '\0')
	{
	dest[dest_len + i] = src[i];
	i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
