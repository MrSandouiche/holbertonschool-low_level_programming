#include "main.h"
/**
 * _islower - regarde si le char est en lowercase
 * @c: le char a verifier
 *
 * Return: 1 si c'est en lower sinon 0 .
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
{
		return (1);
}
	return (0);
}
