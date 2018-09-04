// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
  int number, right_digit;
  char sign;
  
  printf ("Enter your number.\n");
  scanf ("%c%i",&sign, &number);
  
  do {
    right_digit = number % 10;
    printf ("%i", right_digit);
    number = number / 10;
  }
  while (number != 0);
  
  printf ("%c\n", sign);
  
  return 0;
}