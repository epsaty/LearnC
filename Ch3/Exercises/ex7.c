// Calculate expression: (3.31 x 10-8 x  2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)

#include <stdio.h>

int main (void)
{
// variables on the left
    double a_left = 3.31;
    double b_left = 1e-8;     // 10^-8
    double c_left = 2.01;
    double d_left = 1e-7;     // 10^-7
    double left;

// variables on the right
    double a_right = 7.16;
    double b_right = 1e-6;    // 10^-6
    double c_right = 2.01;
    double d_right = 1e-8;    // 10^-8
    double right;

    float result;

    left  = a_left * b_left * c_left * d_left;
    right = a_right * b_right + c_right * d_right;

    result = left / right;
    //printf ("left: %e\n", left);
    //printf ("right: %e\n", right);
    printf ("result = %e\n", result);
}

