#include <stdio.h>

int main(void)
 {
     char *phrase = "_putchar\n";

     for (int i = 0; phrase[i] != '\0'; i++) {
         putchar(phrase[i]);
     }
     return (0);
 }
