#include "Medical.h"
#include "unity.h"
#include<string.h>
#include "unityinternals.h"



/* Required by the unity test framework */
void setUp()
{
}
void tearDown()
{
}
/* Required by the unity test framework */
struct patient//list of global variable
{
	char  age[10];
	char Gender[10];
	char First_Name[20];
	char Last_Name[20];
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Problem[20];
};

struct patient p;

void test_AddRec1(void)
{
strcpy(p.First_Name,"Vinayak");
strcpy(p.Last_Name,"karalatti");
strcpy(p.Gender,"M");
strcpy(p.age,"21");
strcpy(p.Address,"Near Busstand");
strcpy(p.Contact_no,"9087654331");
strcpy(p.Email,"patientno21@gmail.com");
strcpy(p.Problem,"fever");
strcpy(p.Doctor,"Dr.Veeranagoud");


TEST_ASSERT_EQUAL_STRING("Vinayak",p.First_Name);
TEST_ASSERT_EQUAL_STRING("karalatti",p.Last_Name);
TEST_ASSERT_EQUAL_STRING("M",p.Gender);
TEST_ASSERT_EQUAL_STRING("21",p.age);
TEST_ASSERT_EQUAL_STRING("Near Busstand",p.Address);
TEST_ASSERT_EQUAL_STRING("9087654331",p.Contact_no);
TEST_ASSERT_EQUAL_STRING("patientno21@gmail.com",p.Email);
TEST_ASSERT_EQUAL_STRING("fever",p.Problem);
TEST_ASSERT_EQUAL_STRING("Dr.Veeranagoud",p.Doctor);

}

void test_AddRec2(void)
{
strcpy(p.First_Name,"Pooja");
strcpy(p.Last_Name,"Murgod");
strcpy(p.Gender,"f");
strcpy(p.age,"25");
strcpy(p.Address,"Near Bank");
strcpy(p.Contact_no,"6367654331");
strcpy(p.Email,"patientno25@gmail.com");
strcpy(p.Problem,"cough");
strcpy(p.Doctor,"Dr.Narayan");


TEST_ASSERT_EQUAL_STRING("Pooja",p.First_Name);
TEST_ASSERT_EQUAL_STRING("Murgod",p.Last_Name);
TEST_ASSERT_EQUAL_STRING("f",p.Gender);
TEST_ASSERT_EQUAL_STRING("25",p.age);
TEST_ASSERT_EQUAL_STRING("Near Bank",p.Address);
TEST_ASSERT_EQUAL_STRING("6367654331",p.Contact_no);
TEST_ASSERT_EQUAL_STRING("patientno25@gmail.com",p.Email);
TEST_ASSERT_EQUAL_STRING("cough",p.Problem);
TEST_ASSERT_EQUAL_STRING("Dr.Narayan",p.Doctor);

}





int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_AddRec1);
    RUN_TEST(test_AddRec2);



    /* Close the Unity Test Framework */
    return UNITY_END();
}


