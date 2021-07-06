#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "../inc/Medical.h"
#include <time.h>

struct patient//list of global variable
{
	int age;
	char Gender;
	char First_Name[20];
	char Last_Name[20];
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Problem[20];
};

struct patient  p,temp_c;


void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);

}

void LoginScreen(void)//function for login screen
{
//list of variables
int e=0	;
char Username[5];
char Password[15];
char original_Username[5]="ltts";
char original_Password[15]="team6hospital";

do
{
	printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",Username);

	printf("\n\n\t\t\t\t\tPASSWORD:");
	scanf("%s",Password);

	if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
	{
		printf("\n\n\n\t\t\t\t\t...Login Successfull...");

		MainMenu();//call MainMenu function
		break;
	}
	else
	{
		printf("\n\t\t\tPassword is incorrect:( Try Again :)");
		e++;
	}

}
while(e<=2);

	if(e>2)
	{
	printf("You have cross the limit. You cannot login. :( :(");
	int i;
       for (i = 0; i < 5; i++)
        {

        delay(1);
       }
    ex_it();

	}

system("cls");
}

