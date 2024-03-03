/**
 * leet - Encode une chaîne en 1337.
 * @str: La chaînea encoder.
 *
 * Description: Cette fonction remplace certaines lettres de la chaîne pa 133
 *
 * Return: Un pointeur vers la chaîne encod�
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "44337011";
	int i;

	while (*ptr != '\0')
	{
	for (i = 0; leet_chars[i] != '\0'; i++)
	{
	if (*ptr == leet_chars[i])
	{
	*ptr = leet_nums[i];
	break;
	}
	}
	ptr++;
	}
	return (str);
}
