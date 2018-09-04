#include <stdio.h>


int main(void)
{
    int n, pwr2;

    printf ("TABLE OF POWERS OF TWO\n\n");
    printf (" n     2 to the n\n");
    printf ("--- ---------------\n");

    pwr2 = 1;

    for (n = 0; n <= 10; ++n) {
        printf("%2i %10i\n", n, pwr2);
        pwr2 *= 2;

    }

    return 0;

}
#include <stdio.h>


int main(void)
{
    int n, pwr2;

    printf ("TABLE OF POWERS OF TWO\n\n");
    printf (" n     2 to the n\n");
    printf ("--- ---------------\n");

    pwr2 = 1;

    for (n = 0; n <= 10; ++n) {
        printf("%2i %10i\n", n, pwr2);
        pwr2 *= 2;

    }

    return 0;

}
