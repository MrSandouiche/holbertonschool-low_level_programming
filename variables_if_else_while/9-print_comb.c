#include <stdio.h>
/**
 *main - prints numbers of base 16 in lowercase
 *Description random
 *
 *Return: 0
*/
int main(void)
{
	int t;

	for (t = 48; t < 58; t++)
{
	putchar(t);
	if (t < 57)
{
	putchar(44);
	putchar(32);
	}
}
	putchar('\n');

	return (0);
}
