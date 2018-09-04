/* Write a program that acts as a simple 'printing' calculator.
    The program should allow the user to type in expressions of the form
    number   operator
    The following operators should be recognized by the program:
    +     -     *     /     S     E                         */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  double sum, number;
  char operator;
  bool isCalculating;

  // The accumulator shall be 0 at startup
  sum = 0.0;

  // Set flag indicating that calulations are ongoing
  isCalculating = true;

  printf ("Begin Calculations\n");

  // Run calculations until user indicates exit
  while (isCalculating)
  {
      /* Get input from user. Note the blank in the format  string that
          tells scanf to skip leading whitespace, and the first non-whitespace
          character will be read with %c conversion specifier. */

    scanf ("%lf %c", &number, &operator);

    switch (operator)
    {
      case '+':
        sum += number;
        break;

      case '-':
        sum -= number;
        break;

      case '*':
      case 'x':
        sum *= number;
        break;

      case '/':
        if (number == 0)
          printf ("Error: Division by 0 is not allowed!");
        else
          sum /= number;
        break;

      case 'S':
      case 's':
        sum = number;
        break;

      case 'E':
      case 'e':
        isCalculating = false;
        break;

      default:
            printf ("Error: Unknown operator!\n");
            break;
    }

    printf ("= %f\n", sum);
  }

  printf ("End of Calculations");

  return 0;
}
