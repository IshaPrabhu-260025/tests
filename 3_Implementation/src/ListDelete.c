#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "Medical.h"
#include <time.h>



int i;


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




/* **************************************VIEW RECORD*******************************************/
void func_list()
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Patients Record !!!!!!!!!!!!!\n");

		printf("Full Name");

		printf("Gender");

		printf("Age");

		printf("Address");

		printf("Contact No.");

		printf("Email");

		printf("Problem");

		printf("Prescribed Doctor\n");
		printf("=================================================================================================================\n");
		row=17;
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name,
					&p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{

			printf("%s %s \t",p.First_Name, p.Last_Name);

			printf("%c \t",p.Gender);

			printf("%i \t",p.age);

			printf("%s \t",p.Address);

			printf("%s \t",p.Contact_no);

			printf("%s \t",p.Email);

			printf("%s \t",p.Problem);

			printf("%s\n",p.Doctor);
			row++;
		}
		fclose(ek);

		 printf("Wait for some time :) going to Main Menu....\n");


       for (i = 0; i < 5; i++)
            {
        // delay of one second
        delay(1);

       }



		MainMenu();
}


void Dlt_rec()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp_file2.dat","w+");
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Patients Record !!!!!!!!!!!!!\n");
	printf("\n Enter Patient Name to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);

	while (fscanf(ek,"%s %s %c %i %s %s %s %s %s", p.First_Name, p.Last_Name, &p.Gender,
			 &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
	{
		if (strcmp(p.First_Name,name)!=0)
		fprintf(ft,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
		else
		{
			printf("%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");

		for(int x=0; x<1000000000; x++ )
        {


        }
        getchar();
		MainMenu();
	}
	else
	{

		fclose(ek);
		fclose(ft);
		remove("Record2.dat");
		rename("temp_file2.dat","Record2.dat");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		int i;
       for (i = 0; i < 5; i++) {
        // delay of one second
        delay(1);

       }
		MainMenu();
	}
}
