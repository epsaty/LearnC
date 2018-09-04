#include <stdio.h>

int main (void)
{
    float x = 2.55, result;
    float square = x * x;
    float square3 = square * x;

    result = 3 * square3 - 5 * square + 6;

    // result = 3 * x * x * x - 5 * x * x + 6;
    printf ("result = %f\n", result);

    return 0;


}
