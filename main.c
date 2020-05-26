#include <stdio.h>
#include "collab.h"

#define KEY "Enter an operation"

int main() {
  //system("cls");  use system function to clear 
  //screen instead of clrscr();
  printf("\n             Welcome to C calculator \n\n");
 
  helpMenu();
  
  char operand;
  char whitespace;
  int a = 0;
  int b = 0;
  int x = 0;
  
  while(1)
  {
    printf("\n");
    printf("%s : ", KEY);
 
    scanf("%c%c", &operand,&whitespace);
    a = read_ints();
    //scanf("\n");
 
        switch(operand)
        {
            case '+': x = add(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '-': x = sub(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '*': x = multiply(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '/': x = division(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '?': x = mod(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '!': x = factorial(a);
                      printf("%d%c = %d",a,operand,x);
                      break;
 
            case '^': x = power();
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case 'H':
            case 'h': printf("help\n");//helpMenu();
                      break;
 
            case 'Q':
            case 'q': printf("quit\n");//scanf("\n");
                      exit(0);
                      break;
            case 'c':
            case 'C': printf("clear\n");//system("clear"); //"cls" if using windows "clear" if linux
                      helpMenu();
                      break;
 
            default : printf("default\n");//system("clear"); //"cls" if using windows "clear" if linux
                      printf("\n********** You have entered an unavailable option ***********\n");
                      //helpMenu();
        }
        
    }
  
  return 0;
}
