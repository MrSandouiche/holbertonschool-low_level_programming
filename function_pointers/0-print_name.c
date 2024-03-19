#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print un nom
 * @name: le nom a print
 * @f le pointeur de la fonction
 *
 * Return: aucun
 */


void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
		f(name);
}
