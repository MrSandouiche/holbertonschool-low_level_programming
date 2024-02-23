#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - truc random pour betty
*
*/

/* return(0) - ça retourne ???
*
*/

int main(void)
{
        int n;
        int number;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        number = n % 10;
        
        if ((n % 10) > 5)
        { 
            printf("last digit of %d is %d and is greater than 5\n", n , number);
        } 
        else if ((n % 10) == 0)
        {
            printf("Last digit of %d is %d and is 0\n", n, number);
        } 
        else
        {
            printf("last digit of %d is %d and is lesser than 6 and not 0\n", n , number);
        }
        return(0);
        
}
