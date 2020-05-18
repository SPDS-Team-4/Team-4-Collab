#include <stdio.h>
#include "collab.h"

void helpMenu(){
  printf("******* Press 'Q' or 'q' to quit the program ********\n");
  printf("***** Press 'H' or 'h' to display below options *****\n\n");
  printf("Enter 'C' or 'c' to clear the screen and display available options \n\n");
  
  printf("All commands should be of the format: <Command> <A> <B>\n");
  printf("A and B are any integer\nCommand is one of the following characters:\n");
 
  printf("\tEnter + symbol for Addition \n");
  printf("\tEnter - symbol for Subtraction \n");
  printf("\tEnter * symbol for Multiplication \n");
  printf("\tEnter / symbol for Division \n");
  printf("\tEnter ? symbol for Modulus\n");
  printf("\tEnter ^ symbol for Power \n");
  printf("\tEnter ! symbol for Factorial \n\n");
}
