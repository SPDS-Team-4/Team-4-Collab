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
  while (scanf("%d%c", &d, &c) == 1) {
    printf("read: '%d%c'\n",d,c);
    if (c == '\n'){
      break;
    }else{
      //this is where the int would be added to an array
    }
  }
  return d; //this will eventually reurn an array
}
