#include <stdio.c>
#include <stdlib.h>
#include "collab.h"

void create_IO_list(IO_list *operation){
  //Take an empty struct pointer
  //set pointer to defaults. 
}

int set_operation(){
  //set the operation function based on a user entered character
  //return a -1 if the operation character was invalid
  //return a 0 if the operation character was a system command (c,h,q)
  //return a 1 if the operation is a valid math operation
}

void add_input(IO_list *operation, int data){
  //add the passed integer into the input list
}

void add_output(){
  //add the passed integer into the output list
}

void free_IO_list(IO_list *operation){
  //free Input and output lists, then free the structure pointer
}

