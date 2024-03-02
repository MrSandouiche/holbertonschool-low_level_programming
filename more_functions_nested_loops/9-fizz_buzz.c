#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
        } else if (i % 3 == 0) {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
        } else if (i % 5 == 0) {
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
        } else {
            int num = i;
            int digits = 0;
            while (num != 0) {
                digits++;
                num /= 10;
            }
            num = i;
            while (digits-- > 0) {
                putchar('0' + (num % 10));
                num /= 10;
            }
        }

        /* Ajouter un espace sauf pour le dernier nombre */
        if (i != 100) {
            putchar(' ');
        }
    }
    putchar('\n');

    return 0;
}
