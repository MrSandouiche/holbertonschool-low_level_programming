/**
 * string_toupper - Convertit toutes les lettres minuscules en majuscules
 * @str: La chaîn a convertir.
 *
 * Description : Cette fonction convertie les minuscule en majuscule
 *
 * Return: Un pointeur vers la chaîne convertie
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	*ptr -= 32;

	ptr++;
	}
	return (str);
}
