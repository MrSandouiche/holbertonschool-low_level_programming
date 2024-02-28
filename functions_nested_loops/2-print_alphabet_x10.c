#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - imrime dix fois
*
*/

void print_alphabet_x10(void)
{
int i = 0;
for(i = 0; i < 10; i++)
{
	int j;
  for(j = 'a'; j <= 'z';j++)
    putchar(j);
  putchar('\n');
}

}
