// Nested for loop

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter;

    counter = 1;

    while (counter <= 5) {
        printf ("What triangular number do you want?\n");
        scanf ("%i", &number);
        ++counter;
        triangularNumber = 0;
        n = 1;

        while (n <= number) {
            triangularNumber += n;
            ++n;
        }
        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }

/*    for (counter = 1; counter <= 5; ++counter) {
        printf ("What triangular number do you want?\n");
        scanf ("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; ++n)
            triangularNumber += n;

        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }                                   */
    return 0;
}
