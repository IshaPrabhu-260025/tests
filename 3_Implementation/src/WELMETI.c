
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "../inc/Medical.h"

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


void WelcomeScreen(void) //function for welcome screen
{

	printf("\n\n\n\n\n\n\n\t\t\t\t#########################################");
	printf("\n\t\t\t\t#\t\t WELCOME TO\t\t#");
	printf("\n\t\t\t\t#   SDLC-TEAM-6 HOSPITAL MANAGEMENT SYSTEM    #");
	printf("\n\t\t\t\t#########################################");
	printf("\n\n\n\n\n Wait loading login page......\n");
	int i;
       for (i = 0; i < 10; i++) {
        // delay of one second
        delay(1);
       }
	system("cls");//Use to clear screen

}
/* ************************************************* Title Screen ********************************************* */
void Title(void)//function for title screen
{
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t       SDLC-TEAM-6 HOSPITAL        ");
	printf("\n\t\t----------------------------------------------------------------------------------");
}
/* ************************************************* Main Menu ********************************************* */
void MainMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. Add Patients Record\n");
	printf("\n\t\t\t\t2. List Patients Record\n");
	printf("\n\t\t\t\t3. Search Patients Record\n");
	printf("\n\t\t\t\t4. Edit Patients Record\n");
	printf("\n\t\t\t\t5. Delete Patients Record\n");
	printf("\n\t\t\t\t6. Exit\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 6:");
	scanf("%i", &choose);

	switch(choose)//switch to differeht case
	{

	case 1:
	Add_rec();//Add_rec function is called
    	break;
    case 2:
    	func_list();
    	break;
	case 3:
	Search_rec();//View_rec function is call
    	break;
	case 4:
		Edit_rec();//Edit_rec function is call
		break;
	case 5:
		Dlt_rec();//Dlt_rec function is call
		break;
	case 6:
		ex_it();//ex_it function is call
    	break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		//getch();//holds screen
	}//end of switch


}
/* ************************************************* Exit Screen ********************************************* */
void ex_it(void)//function to exit
{
	system("cls");
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
	//getch();//holds screen

}
