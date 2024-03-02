#include "main.h"
#include <stdio.h>
/**
 * main - Fonction principale du programme
 *
 * Description : initialise programme
 *
 * Return: Toujours 0
 */






int main(void)
{
	int a;
	int b;

		a = 98;
		b = 42;
		printf("a=%d, b=%d\n", a, b);
		swap_int(&a, &b);
		printf("a=%d, b=%d\n", a, b);
		return (0);
}
