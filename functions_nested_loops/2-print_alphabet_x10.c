#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - imrime dix fois
*
*/

void print_alphabet_x10(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
for (i = 'a'; i < 10; i++)
{
_putchar(i);
}
_putchar('\n');
}
