#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#define PROJECT_NAME "function"

/* Prototypes for all the test functions */
void test_do_celsius_fahrenheit(void);
void test_do_fahrenheit_celsius(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "celsius_fahrenheit", test_do_celsius_fahrenheit);
  CU_add_test(suite, "fahrenheit_celsius", test_do_fahrenheit_celsius);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_do_celsius_fahrenheit(void) {
  CU_ASSERT(86 == do_celsius_fahrenheit(30));
  CU_ASSERT(68 == do_celsius_fahrenheit(20));
 

  /* Dummy fail*/
  CU_ASSERT(100 == do_celsius_fahrenheit(25));
}

void test_do_fahrenheit_celsius(void) {
  CU_ASSERT(37 == do_fahrenheit_celsius(100));
 

  /* Dummy fail*/
  CU_ASSERT(2== do_fahrenheit_celsius(80));
}
