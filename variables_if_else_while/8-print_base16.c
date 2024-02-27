#include <stdio.h>
/**
 *main - prints numbers of base 16 in lowercase
 *
 *
 *
 *Return: 0
*/
int main(void)
{
	int num;
	char Hex[] = "0123456789abcdef";

	for (num = 0; num <= 15; num++)

{
	putchar(Hex[num]);
}

putchar('\n');

return (0);
}
