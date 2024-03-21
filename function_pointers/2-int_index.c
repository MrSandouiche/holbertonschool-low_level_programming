#include "function_pointers.h"

/**
 * int_index - cherche integer
 * @cmp: pointe la fonction a comparer
 * @array: pointe l'array a chercher
 * @size: taille array
 * Return: si -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;
    if (cmp && array)
    {
        for (i = 0; i <= size; i++)
        {
            if (cmp(array[i]) != 0)
                return(i);
        }
    }
    return (-1);
}
