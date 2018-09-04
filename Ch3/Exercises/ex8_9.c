//Next multiple

// Formula: next_multiple = i + j - i % j

#include <stdio.h>

int main (void)
{
    // days  = i
    int i1 = 256;
    int i2 = 365;
    int i3 = 12258;
    int i4 = 996;

    // weeks = j
    int j1 = 7;
    int j2 = 7;
    int j3 = 23;
    int j4 = 4;

    int result1 = i1 + j1 - i1 % j1;
    int result2 = i2 + j2 - i2 % j2;
    int result3 = i3 + j3 - i3 % j3;
    int result4 = i4 + j4 - i4 % j4;

    printf ("The next largest even multiple of %i and %i is %i.\n", i1, j1, result1);
    printf ("The next largest even multiple of %i and %i is %i.\n", i2, j2, result2);
    printf ("The next largest even multiple of %i and %i is %i.\n", i3, j3, result3);
    printf ("The next largest even multiple of %i and %i is %i.\n", i4, j4, result4);


}
