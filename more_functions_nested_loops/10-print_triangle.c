#include "main.h"

/**
 * print_triangle - Imprime un triangle composé de caractères #.
 * @size: La taille du triangle.
 */
void print_triangle(int size) {
    int i, j;

    if (size <= 0) {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= i; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
    _putchar('\n');
}
