#include <stdio.h>
#include "collab.h"

/*
* read_ints()
*   read an unknown number of intgers from the command line into an array
*   returns the last integer (will be updated to return a list)
*/
int read_ints(){
  int d;
  char c;
  while (scanf("%d%c", &d, &c) >= 1) {
    //fprintf(stdout,"read: '%d%c'\n",d,c);//print used for debugging
    if (c == '\n'){
      break; //this will end the function
    }else{
      //this is where the int would be added to an array
    }
  }
  return d; //this will be changed to not return anything.
}
