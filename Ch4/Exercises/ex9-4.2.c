#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    triangularNumber = 0;
    n = 1;

    /* for (n = 1; n <= 200; n = n + 1)
        triangularNumber = triangularNumber + n;        */

    while (n <= 200) {
        triangularNumber += n;
        ++n;

    }

    printf ("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}
