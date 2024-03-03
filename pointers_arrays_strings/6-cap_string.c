#include <stddef.h>

/**
 * cap_string - Met en majuscule le premier caract�re de chaque mot
 * @str: La chaîe a modifier.
 *
 * Description : Cette fonction convertit le premier caractère de chaque mo
 * Return: Un pointeur vers la chaîne modifiée.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int f = 1;

	while (*ptr != '\0')
	{
	if ((*ptr >= 'a' && *ptr <= 'z') && f)
	{
	*ptr -= 32;
	f = 0;
	}
	else if (*ptr >= 'A' && *ptr <= 'Z')
	{
	f = 0;
	}
	else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
	*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
	*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
	*ptr == '}')
	{
	f = 1;
	}

	ptr++;
	}

	return (str);
}
