#include <stdio.c>
#include <stdlib.h>
#include "collab.h"

/*IO_list_defaults
    Input:
      operation - An un-initialized IO_list
    No Output
    
    Description:
      Takes a structure pointer and sets all of the default structure values

*/
void IO_list_defaults(IO_list *operation){
  //set defaults.
  operation->operator = '';
  operation->func = NULL;
  operation->inLimit = 0;
  operation->input = NULL;
  operation->outLimit = 0;
  operation->output = NULL;
}

/*set_operation
  Input:
    operation - An IO_list pointer
  Output: 
    int - Integer flag for the final state of the function
      returns -1 if the character is not a valid operator or command
      returns 0 if the character is a command
      returns 1 if the character is a valid operator
  
  Description:
    reads in a character to determine the desired operator and function.
    If the character is a math operator, it sets the function pointer.

*/
int get_operation(char op){
  //set the operation function based on a user entered character
  //return a -1 if the operation character was invalid
  //return a 0 if the operation character was a system command (c,h,q)
  //return a 1 if the operation is a valid math operation
}

/*add_input
  Input:
    operation - An IO_list pointer
    data - An integer entered by the user
  No Output
  
  Description:
    Inserts the new integer at the end of the input list

*/
void add_input(IO_list *operation, int data){
  //add the passed integer into the input list
  int *temp = NULL;
  if(operation->inLimit > 0){
    operation->inLimit += 1;
    temp = realloc(operation->input,sizeof(int)*(operation->inLimit));
  }else {
    //inlimit = 0;
    operation->inlimit = 1;
    temp = malloc(sizeof(int));
  }
  if (temp == NULL){
      //Throw an error
      //exit program
  }
  operation->input = temp;
}

/*add_output
  Input:
    operation - An IO_list pointer
    data - An integer result from a function
  No Output
  
  Description:
    Inserts the integer at the end of the output list

*/
void add_output(){
  //add the passed integer into the output list
  int *temp = NULL;
  if(operation->outLimit > 0){
    operation->outLimit += 1;
    temp = realloc(operation->output,sizeof(int)*(operation->outLimit));
  }else {
    //inlimit = 0;
    operation->outlimit = 1;
    temp = malloc(sizeof(int));
  }
  if (temp == NULL){
      //Throw an error
      //exit program
  }
  operation->output = temp;
}

/*clean_IO_list
  Input:
    operation - An IO_list pointer
  No Output
  
  Description:
    free the lists in the structures and reset structure to defaults

*/
void clean_IO_list(IO_list *operation){
  //free Input and output lists
  free(operation.input);
  free(operation.output);
  
  //reset the structure to it's defaults
  IO_list_defaults(operation);
}

