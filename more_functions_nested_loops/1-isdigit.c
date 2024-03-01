#include "main.h"
/**
 * _isdigit - permet de vérifier si le caractère est  un chiffre ou non
 *
 * Description: Cette fonction vérifie sic'est un bien nombre
 *
 * @c: le caractère à vérifier
 *
 * Return: 1 et apres 0
 */





int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
