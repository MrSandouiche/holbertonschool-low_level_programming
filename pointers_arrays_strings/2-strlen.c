#include <stdio.h>

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: La chaîne à mesurer.
 *
 * Description: Cette fonction compte le nombre de caractères dans
 *
 * Return: La longueur de la chaîne.
 */


int _strlen(char *s)
{
	int longueur = 0;

	while (*s != '\0')
	{
	longueur++;
	s++;
	}
return (longueur);
}
