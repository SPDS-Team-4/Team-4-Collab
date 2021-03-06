#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "CUnit/Basic.h"
#include "CUnit/CUnit.h"
#include "collab.h"

void test_add(void)
{
	CU_ASSERT ( add(0,9) == 9);
	CU_ASSERT ( add(-1,2) == 1);
}

void test_subtract(void)
{
	CU_ASSERT ( sub(10,9) == 1);
    
}
void test_operations(void)
{
	int var1= 10;
	int var2 = 5;
	CU_ASSERT (add (var1,var2) == 15);
	CU_ASSERT (sub(var1,var2) == 5);
	CU_ASSERT (multiply(var1,var2) == 50);
	CU_ASSERT (division(var1,var2) == 2);
	CU_ASSERT (mod(var1,var2) == 0);
	CU_ASSERT (factorial(var2) == 120);
	CU_ASSERT (power(var1,var2) == 100000);
        CU_ASSERT (power(10,2) == 100);
}

void test_power_n_inputs(void)
{
//the header collab.h will have the defintion of the structure
	struct Input_Output_list test_input_struct, test_output_struct; 
	int in_array[5] =  {10,2,3,4,5};
	int out_array[4] =  {100,1000,10000,100000};	
	test_input_struct.operation = Power;
	test_input_struct.inLimit = 5;
	test_input_struct.input = in_array;
	test_output_struct = test_input_struct;	
	test_output_struct.outLimit = 4;
	test_output_struct.outLimit = out_array;	
	//Compare the structure variable that is updated by the function power_n_inpouts
	//to the expected structure test_output_struct
	CU_TSt_PRT_EQUAL (  ,);
    
}
int main() 
{
CU_initialize_registry();
CU_pSuite suite_1 = CU_add_suite("TestSuite_1", 0, 0);
CU_pSuite suite_2 = CU_add_suite("TestSuite_2", 0, 0);
CU_pSuite suite_3 = CU_add_suite("TestSuite_3", 0, 0);
CU_pSuite suite_4 = CU_add_suite("TestSuite_4", 0, 0);	
CU_add_test(suite_1, "Test_Suite_1", test_add);
CU_add_test(suite_2, "Test_Suite_2", test_subtract);
CU_add_test(suite_3, "Test_Suite_3", test_operations);
CU_add_test(suite_4, "Test_Suite_4", test_power_n_inputs);
CU_basic_set_mode(CU_BRM_VERBOSE);
CU_basic_run_tests();
CU_cleanup_registry();
return 0;
}









