#include "main.h"

/**
 * _isupper - permet de vérifier si le caractère est en majuscule ou non
 *
 * Description: Cette fonction vérifie si le caractère passé en argument
 *              est une lettre majuscule en ASCII.
 *
 * @c: le caractère à vérifier
 *
 * Return: 1 si le caractère est majuscule, sinon 0
 */



int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
