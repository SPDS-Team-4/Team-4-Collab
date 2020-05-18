#include <stdio.h>
#include "collab.h"

#define KEY "Enter an operation"

int main() {
  //system("cls");  use system function to clear 
  //screen instead of clrscr();
  printf("\n             Welcome to C calculator \n\n");
 
  helpMenu();
  
  char operand;
  int a,b,x;
  
  while(1)
    {
        printf("\n");
        printf("%s : ", KEY);
 
        scanf("%c", &operand);
 
        switch(operand)
        {
            case '+': scanf(" %d %d\n",&a,&b);
                      x = add(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '-': scanf(" %d %d\n",&a,&b);
                      x = sub(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '*': scanf(" %d %d\n",&a,&b);
                      x = multiply(&a,&b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '/': scanf(" %d %d\n",&a,&b);
                      x = division(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '?': scanf(" %d %d\n",&a,&b);
                      x = mod(a,b);
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case '!': scanf(" %d\n",&a);
                      x = factorial(a);
                      printf("%d%c = %d",a,operand,x);
                      break;
 
            case '^': scanf(" %d %d\n",&a,&b);
                      x = power();
                      printf("%d %c %d = %d",a,operand,b,x);
                      break;
 
            case 'H':
            case 'h': scanf("\n");
                      helpMenu();
                      break;
 
            case 'Q':
            case 'q': scanf("\n");
                      exit(0);
                      break;
            case 'c':
            case 'C': scanf("\n");
                      system("cls");
                      helpMenu();
                      break;
 
            default : system("cls");
                      printf("\n********** You have entered an unavailable option ***********\n");
                      helpMenu();
        }
        
    }
  
  return 0;
}
