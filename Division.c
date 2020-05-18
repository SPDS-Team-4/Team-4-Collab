#include <stdio.h>

#include "collab.h"

int division(int a, int b) 

{

  if ( b == 0 )
  {
    printf("Warning: Divide by zero");
   }

  return (a/b);  

}
