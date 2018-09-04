/* Program to find the sum its digits of a number */

#include <stdio.h>

int main (void)
{
    int number, lastDigit, sum;
    sum = 0;

    // Input a number from user
    printf ("Enter your number.\n");
    scanf ("%i", &number);

    // Repeat till number becomes 0
    while (number != 0) {

        // Find the last digit
        lastDigit = number % 10;

        // Add last digit to sum
        sum = sum + lastDigit;

        // Remove last digit from number
        number = number / 10;
    }
    printf ("%i", sum);

    return 0;
}
