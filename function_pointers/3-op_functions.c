#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - fonction qui retourne le sum de a+b
 * @a: premiere valeur
 * @b: seconde valeur
 *
 * Return: valeur a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -fonction qui retourne soustraction a - b
 * @a: premiere valeur
 * @b: seconde valeur
 *
 * Return: soustr a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplie a * b
 * @a: 1er valeur
 * @b: 2eme valeur
 *
 * Return: multiplie a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divise  a / b
 * @a: 1 valeur
 * @b: 2 valeur
 *
 * Return: divise a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - fonction qui modulo a % b
 * @a: 1 valeur
 * @b: 2  valeur
 *
 * Return: modulo a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
