#include <string.h>
#include "Medical.h"
#include "unity.h"
#include "unity_internals.h"



/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


struct login
{
char Username[5];
char Password[15];

};

struct login high_level_test, low_level_test;


char original_Username[5]="ltts";
char original_Password[15]="team6hospital";


void test_loginH_validation(void) // To test valid Username and Password
{

strcpy(high_level_test.Username,"ltts");
strcpy(high_level_test.Password,"team6hospital");

TEST_ASSERT_EQUAL_STRING(original_Username,high_level_test.Username);
TEST_ASSERT_EQUAL_STRING(original_Password,high_level_test.Password);


}

void test_LoginL_should_Notexceed_maxlimit(void) //To test limit
{
strcpy(low_level_test.Username,"ltts");
strcpy(low_level_test.Password,"team6hospital");

TEST_ASSERT_EQUAL_CHAR_ARRAY_MESSAGE(original_Username,low_level_test.Username,5,"exceeding max 5" );
TEST_ASSERT_EQUAL_CHAR_ARRAY_MESSAGE(original_Password,low_level_test.Password,15,"exceeding max 15");


}
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_loginH_validation);
    RUN_TEST(test_LoginL_should_Notexceed_maxlimit);


    /* Close the Unity Test Framework */
    return UNITY_END();
}



