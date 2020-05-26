#include <stdio.h>
#include "collab.h"

/*
* read_ints()
*   read an unknown number of intgers from the command line into an array
*   returns the last integer (will be updated to return a list)
*/
int read_ints(){
  int k;
  while (scanf("%d", &k) == 1) {
  }
  return k;
}
