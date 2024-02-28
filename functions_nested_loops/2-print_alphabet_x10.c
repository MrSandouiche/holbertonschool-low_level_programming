#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - imrime dix fois
*
*/

void print_alphabet_x10(void)
{

for(int i = 0; i < 10; i++)
{
  for(int j = 'a'; j <= 'z';j++)
    putchar(j);
  putchar('\n');
}

}
