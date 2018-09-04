//Display each 5'th triangular number between 5 and 50
//Formula: triangularNumber = n * (n +1) / 2

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    printf ("Table of triangular number 10 in step 5\n\n");
    printf ("Triangule number       Sum of the number\n");
    printf ("----------------------------------------\n");

    triangularNumber = 0;

    for (n = 5; n <= 50; n+=5 ){
        triangularNumber = n * (n + 1) / 2;
        printf ("%2i         %13i\n", n, triangularNumber);
    }


    return 0;
}
