// Convert Fahrenheit to Celsius

#include <stdio.h>

int main (void)
{
    float F = 27, C;

    C = (F - 32) / 1.8;

    printf ("%f degrees Fahrenheit are equal to %f Celsius degrees", F, C);

    return 0;
}
