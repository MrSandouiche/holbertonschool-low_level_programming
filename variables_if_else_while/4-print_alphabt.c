#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: �a fait que �a imprime l'alphabet en minscule sans le q ni e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		putchar(i);
	}
		putchar('\n');

	return (0);
}
