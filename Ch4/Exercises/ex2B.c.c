//Display n and n^2  - input from user

#include <stdio.h>

int main (void)
{
    int n, square, number;

    printf ("Enter number you want to have it squared: ");
    scanf ("%i", &number);

    printf ("Table of n and n^2 ranging from 1 to 10\n\n");
    printf ("n      n^2\n");
    printf ("-      ---\n");

    for (n = 0; n <= number; ++n){
        square = n * n;
        printf ("%2i     %i\n", n, square);
    }

    return 0;
}
