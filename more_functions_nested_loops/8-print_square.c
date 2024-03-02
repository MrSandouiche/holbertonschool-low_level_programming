#include "main.h"

/**
 * print_square - Imprime un carré
 * @size: la taille du carré
 *
 * Return: Aucun
 */
void print_square(int size)
{
    int x, y;

    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (x = 0; x < size; x++)
        {
            for (y = 0; y < size; y++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

