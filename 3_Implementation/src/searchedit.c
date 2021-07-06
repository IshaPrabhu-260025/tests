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


void Search_rec(void)
{
    int i;
    char ans=0;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Patients Record !!!!!!!!!!!!!\n");
	printf("\n Enter Patient Name to be viewed:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
	{
		if(strcmp(p.First_Name,name)==0)
		{

			printf("Full Name\t");

			printf("Gender\t");

			printf("Age\t");

			printf("Address\t");

			printf("Contact No.\t");

			printf("Email\t");

			printf("Problem\t");

			printf("Prescribed Doctor\n");
			printf("=================================================================================================================\n");

			printf("%s\t %s\t",p.First_Name, p.Last_Name);

			printf("%c\t",p.Gender);

			printf("%i\t",p.age);

			printf("%s\t",p.Address);

			printf("%s\t",p.Contact_no);

			printf("%s\t",p.Email);

			printf("%s\t",p.Problem);

			printf("%s\t",p.Doctor);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.First_Name,name)!=0)
	   {

		printf("Record not found!");


			   }
	fclose(ek);
	L:

	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Search_rec();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");

		MainMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}

void Edit_rec(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  int ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.dat","w+");
	   ek=fopen("Record2.dat","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		 for (i = 0; i < 5; i++) {
        // delay of one second
        delay(1);
       }
		MainMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Patients Record !!!!!!!!!!!!!\n");
	   	printf("Enter the First Name of the Patient : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		if(ft==NULL)
		{
			printf("\n Can not open file");

			MainMenu();
		}
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{
			if(strcmp(p.First_Name, name)==0)
			{
				valid=1;

				printf("*** Existing Record ***");

				printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);

				printf("Enter New First Name: ");
				scanf("%s",p.First_Name);

				printf("Enter Last Name: ");
				scanf("%s",p.Last_Name);

				printf("Enter Gender: ");
				scanf("%c",&p.Gender);
				p.Gender=toupper(p.Gender);

				printf("Enter age: ");
				scanf(" %i",&p.age);

				printf("Enter Address: ");
				scanf("%s",p.Address);
				p.Address[0]=toupper(p.Address[0]);

				printf("Enter Contact no: ");
				scanf("%s",p.Contact_no);

				printf("Enter New email: ");
				scanf("%s",p.Email);

				printf("Enter Problem: ");
				scanf("%s",p.Problem);
				p.Problem[0]=toupper(p.Problem[0]);

				printf("Enter Doctor: ");
			    scanf("%s",p.Doctor);
			    p.Doctor[0]=toupper(p.Doctor[0]);
			     printf("\nPress 1 charecter for the Updating operation : ");
				scanf("%i",&ch);
				if(ch==1)
				{
				fprintf(ft,"%s %s %c %i %s %s %s %s %s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
				printf("\n\n\t\t\tPatient record updated successfully...");
				}

              }
			else
			{
			fprintf(ft,"%s %s %c %i %s %s %s %s %s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
			}


		 }

		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   for (i = 0; i < 5; i++)
        {

        delay(1);
       }
	   remove("Record2.dat");
   	   rename("temp2.dat","Record2.dat");

		MainMenu();
}
