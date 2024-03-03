/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers
 * @a: Le tableau d'entiers
 * @n: Le nombre d'éléments dans le tableau.
 *
 * Description : Cette fonction inverse le contenu du tableau
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}
