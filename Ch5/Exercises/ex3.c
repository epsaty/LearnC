    /* Write a program that accepts two integer values typed in
        by the user. Display the result of dividing the first integer
        by the second, to three-decimal-place accuracy. Remember to
        have the program check for division by zero.            */

#include <stdio.h>

int main (void)
{
    int num1, num2;
    float result ;

    printf ("Please enter two integers: ");
    scanf ("%i %i", &num1, &num2);

    result = (float)num1 / (float)num2;

    if (num2 == 0)
        printf ("Division by 0, please try again.\n");
    else
        printf ("%i divided by %i is equal to %.3f", num1, num2, result);

    return 0;
}
