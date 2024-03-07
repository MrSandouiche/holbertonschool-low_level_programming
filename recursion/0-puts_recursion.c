#include "main.h"


/**
* print_diagsums - affiche la somme des deux diagonales d'une matrice carré
* @a: pointeur vers un tableau 2D
* @size: taille de la matrice carré
*
* Description: Cette fonction calcule et affiche la somme de la diagonale
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
