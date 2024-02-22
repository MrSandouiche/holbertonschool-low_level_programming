#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;
        int number;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        number = n %10;
        printf("The last digit of %d is %d"  , n , number);
       
        printf("and %d is 0", number);
        
        return (0);
}
