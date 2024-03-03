#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: La chaîn a  inverser.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	while (s[length] != '\0')
	{
	length++;
	}

	end = length - 1;

	while (start < end)
	{

	char temp = s[start];

	s[start] = s[end];

	s[end] = temp;

	start++;
	end--;
	}
}
