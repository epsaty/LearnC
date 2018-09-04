//Display n and n^2 from 1 to 10

#include <stdio.h>

int main (void)
{
    int n, square;

    printf ("Table of n and n^2 ranging from 1 to 10\n\n");
    printf ("n      n^2\n");
    printf ("-      ---\n");

    square = 0;

    for (n = 1; n <= 10; ++n){
        square = n * n;
        printf ("%2i     %i\n", n, square);
    }
    return 0;
}
