    /* Write a program that asks the user to type in two integer values
        at the terminal. Test these two numbers to determine if the first
        is evenly divisible by the second, and then display an appropriate
        message at the terminal.                                        */

#include <stdio.h>

int main (void)
{
    int num1, num2, result;

    printf ("Please enter two integers: ");
    scanf ("%i %i", &num1, &num2);

    result = num1 % num2;

    if (result == 0)
        printf ("%i is evenly divisible by %i", num1, num2);
    else
        printf ("%i is not evenly divisible by %i", num1, num2);

    return 0;
}
