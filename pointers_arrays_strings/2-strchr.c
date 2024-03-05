#include "main.h"
#include <stddef.h>

/**
 * _strchr - Localise un caractère dans une chane.
 * @s: La chaîn a rechercher
 * @c: Le caractèrea rechercher dans la chaîne
 *
 * Description : Cette fonction renvoie un pointeur vers la première occurren
 *
 * Return: Un pointeur vers la première occurrence du caract�
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (c == '\0')
	return (s);
	return (NULL);
}
