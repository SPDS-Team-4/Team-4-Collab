#ifndef COLLAB_H
#define COLLAB_H

#include <stdio.h>
#include <stdlib.h>


int add ();
int sub ();
int division ();
int multiply ();
int factorial ();
int mod ();
int power ();
void helpMenu ();
int read_ints();
#endif

struct IO_list {
  char operator;                //character representation of operation
  void (*func)(IO_list *op);    //function pointer for performing opertation
  int inLimit;                  //length of the input array
  int *input;                   //pointer to the input array
  int outLimit;                 //length of the output array
  int *output;                  //pointer to the output array
}
