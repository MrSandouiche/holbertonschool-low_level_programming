#include "main.h"
/**
 * _print_rev_recursion - affiche une chaîne de anière invers�
 * @s: la chaîn inverser eaffir
 *
 * Description: Cette fonction affiche des caractère inversé
 *
 *  
 */









void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
