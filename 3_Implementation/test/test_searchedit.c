#include "Medical.h"
#include "unity.h"
#include<string.h>
#include "unityinternals.h"


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */

void tearDown()
{
}

struct patient//list of global variable
{
	 char age[10];
	 char Gender[5];
	char First_Name[20];
	char Last_Name[20];
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Problem[20];
};

struct patient p;


void test_search(void)
{

strcpy(p.First_Name,"Vinayak");


TEST_ASSERT_EQUAL_STRING("Vinayak",p.First_Name);


}

void test_edit(void)
{

strcpy(p.First_Name,"Vinayak");

TEST_ASSERT_EQUAL_STRING("Vinayak",p.First_Name);

strcpy(p.First_Name,"Bharath");
strcpy(p.Last_Name,"karalatti");
strcpy(p.Gender,"M");
strcpy(p.age,"21");
strcpy(p.Address,"Near Busstand");
strcpy(p.Contact_no,"9087654331");
strcpy(p.Email,"patientno21@gmail.com");
strcpy(p.Problem,"fever");
strcpy(p.Doctor,"Dr.Veeranagoud");

TEST_ASSERT_EQUAL_STRING("Bharath",p.First_Name);
TEST_ASSERT_EQUAL_STRING("karalatti",p.Last_Name);
TEST_ASSERT_EQUAL_STRING("M",p.Gender);
TEST_ASSERT_EQUAL_STRING("21",p.age);
TEST_ASSERT_EQUAL_STRING("Near Busstand",p.Address);
TEST_ASSERT_EQUAL_STRING("9087654331",p.Contact_no);
TEST_ASSERT_EQUAL_STRING("patientno21@gmail.com",p.Email);
TEST_ASSERT_EQUAL_STRING("fever",p.Problem);
TEST_ASSERT_EQUAL_STRING("Dr.Veeranagoud",p.Doctor);

}


int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_search);
    RUN_TEST(test_edit);



    /* Close the Unity Test Framework */
    return UNITY_END();
}
