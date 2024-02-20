#include <stdio.h>
#ifdef _WIN64
#define ARCHITECTURE "64-bit"
#elif _WIN32
#define ARCHITECTURE "32-bit"
#else
#define ARCHITECTURE "unknown"
#endif
 int main (void)
  
{
	printf ("Size of char : %ld byte\n", sizeof (char));
	printf ("Size of int : %ld byte\n", sizeof (int));
	printf ("Size of long int : %ld byte\n", sizeof (long int));
	printf ("Size of a float : %ld byte\n", sizeof (float));
return(0);
}
