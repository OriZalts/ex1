/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  int bit, num;
  printf("Please enter a number:\n");
  scanf(" %d", &num);
  printf("Please enter a position:\n");
  scanf(" %d", &bit);
  printf("%d\n",1&(num>>bit));
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf(" %d", &num);
  printf("Please enter a position:\n");
  scanf(" %d", &bit);
  printf("%d\n",num|(bit<<1));
  printf("%d\n",num&~(bit<<1));
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf(" %d", &num);
  printf("Please enter a position:\n");
  scanf(" %d", &bit);
  printf("%d\n",bit);

  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf(" %d", &num);
  printf("%d\n",(num&1)^1);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
