  /* Write a program that takes an integer in from
    the terminal and displays the digis as text */

  // Program to print numbers in words
#include <stdio.h>

int main (void)
{
  int number, reverse = 0;
  
    //Input from user
  printf ("Please enter a number:");
  scanf ("%i", &number);
  
    // Store reverse input in 'reverse'
  while (number != 0) {
    reverse = (reverse * 10) + (number % 10);
    number = number / 10;
  }
  
  /* Extract last digit of reverse and print coresponding digit
    in words until it becomes 0 */
  while (reverse != 0) {
    switch (reverse % 10)
    {
      case 0:
        printf ("zero ");
        break;
        
      case 1:
        printf ("one ");
        break;
        
      case 2:
        printf ("two ");
        break;
        
      case 3:
        printf ("three ");
        break;
        
      case 4:
        printf ("four ");
        break;
        
      case 5:
        printf ("five ");
        break;
        
      case 6:
        printf ("six ");
        break;
        
      case 7:
        printf ("seven ");
        break;
        
      case 8:
        printf ("eight ");
        break;
        
      case 9:
        printf ("nine ");
        break;
    }
  
  reverse = reverse / 10;
  }
  
  printf ("\n");
  return 0;
}