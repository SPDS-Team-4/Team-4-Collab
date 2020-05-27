#include <stdio.h>
#include <math.h>
#include "collab.h"

/*
enum operation_type {add=1, Subtract=2, Multiply=3,Divide=4, Factorial=5,Power=6}; 
struct Input_Output_list  
    { 
        enum operation_type operation;  // store the operation type 
        int inLimit;  // store the limit of the input array 
        int *input;  //declaration of integer pointer, whose memory is allocated based on inlimit. 
        int outLimit; //limit of result array 
        int *output; //declaration of integer pointer whose memory is allocated based on outlimit. 
    } ;

*/
int power(int a, int b) 
{
  int result;
  result = (int) (pow(a,b));
  return (result);  
}


  int power_n_inputs( struct IO_list *struct_var ) 
{
        int i =0;
        //the first element in the list is the base.
        int base = struct_var.input[0];
    
        for (i=0;i<struct_var.inLimit-1;i++)
        {
            struct_var.output[i] = (int) (pow(base,struct_var.input[i+1]));
            printf ("Power of %d raisd to %d is %d", base,struct_var.input[i+1],struct_var.output[i] );
        }
        struct_var.outLimit = struct_var.inLimit - 1; 
        printf ("%d", struct_var.outLimit );
        
   return (0);  
}

/* Portion of the test written from main. Commented out to it does not break the build. This portion will be deleted shortly */
/* int main()
{
	int i=0,j;
	int len_input =0;
  struct Input_Output_list Input_struct; 
  enum operation_type operation;
	// test data -1
  int array[5] = {10,2,3,4,5};
	//Initalize the structure
	Input_struct.operation = Power;
	Input_struct.inLimit = 5;
	Input_struct.input = array;
  //Initialize the output member with a value other than expected
	Input_struct.outLimit = 0;
	//Initialise the output member with a value other than expected
  Input_struct.output = array;
	
	for (i=0;i<Input_struct.inLimit;i++)
		{
	   printf("Struture member input is %d \n ",Input_struct.input[i]);
	}
	
	//Calling the power function with the structure
    power(Input_struct);
    return (0);
}
*/
