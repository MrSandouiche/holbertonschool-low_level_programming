#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - imprime l'alphabet
 *
 */

void print_alphabet(void)
{
	char i;
for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
	putchar('\n');

}
/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/


int main(void)
{
	print_alphabet();

	return (0);
}
