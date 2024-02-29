#include <stdio.h>
#include "main.h"
/**
 * _isalpha - regarde si le char est en jsp il est 2h jsuis epuisé
 * @c: le char a verifier
 *
 * Return: 1 si c'est en lower sinon 0 .
 */



int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{

	return (1);
	}
	else
	{
	return (0);
	}
}
