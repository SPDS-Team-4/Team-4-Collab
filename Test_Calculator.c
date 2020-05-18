#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "CUnit/Basic.h"
#include "CUnit/CUnit.h"
#include "collab.h"

void test_add(void)
{
	CU_ASSERT ( add(0,9) == 10);
}

void test_subtract(void)
{
	CU_ASSERT ( sub(10,9) == 1);
    
}

int main() 
{
CU_initialize_registry();
CU_pSuite suite_1 = CU_add_suite("TestSuite_1", 0, 0);
CU_pSuite suite_2 = CU_add_suite("TestSuite_2", 0, 0);
CU_add_test(suite_1, "Test_Suite_1", test_add);
CU_add_test(suite_2, "Test_Suite_2", test_subtract);
CU_basic_set_mode(CU_BRM_VERBOSE);
CU_basic_run_tests();
CU_cleanup_registry();
return 0;
}









