// Factorial integer calculator

#include <stdio.h>

int main (void)
{
    int n, fact;

    printf ("Factorial table from 1 to 10\n\n");
    printf (" n!            result\n");
    printf ("----         ---------\n");

    fact = 1;

    for (n = 1; n <= 10; ++n) {
        fact *= n;                              // fact = fact * n
        printf ("%2i        %10i\n", n, fact);
    }


    return 0;
}

