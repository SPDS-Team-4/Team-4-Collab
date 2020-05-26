#include <stdio.h>
#include "collab.h"

/*
* read_ints()
*   read an unknown number of intgers from the command line into an array
*   returns the last integer (will be updated to return a list)
*/
int read_ints(){
  int k;
  char c;
  while (scanf("%d%c", &k, &c) == 1) {
    if (c == '\n'){
      break;
    }else{
      //this is where the int would be added to an array
    }
  }
  return c; //this will eventually reurn an array
}
