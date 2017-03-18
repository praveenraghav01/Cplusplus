#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
int n,flag=0;
float ag,si[15];
int a[15],f[15],t[15];
struct student
{
	char name[20];
	int rn;
	float mr,at;
}s;

void pass()
{
	 char pasword[10],usrname[10], ch;
	 int i;
	 printf("Enter User name: ");
	 gets(usrname);
	 if(strcmp(usrname,"root")==0||strcmp(usrname,"user")==0)
	 {
	 printf("Enter the password <any 4 characters>: ");

	 for(i=0;i<4;i++)
	 {
			ch =getch();
			pasword[i] = ch;
			ch = '@' ;
			printf("%c",ch);
	 }

	 pasword[i] = '\0';
	
	if(strcmp(pasword,"root")==0)
	{
		flag=1;
	}
	else if(strcmp(pasword,"user")==0)
	{
		flag=2;
	}
	else
	{
		printf("Worng Password!!!");
	}
   }
   else
   {
   	printf("Worng Username!!!");
   }
}

void calc()
{
	int w,c,d=0;
	float e,fs;
	printf("\nEnter the Current Number of week :-");
	scanf("%d",&w);
	for(int i=0;i<n;i++)
	{
	printf("Enter the Classes Missed till now in subject %d :-",i+1);
	scanf("%d",&d);
	t[i]=a[i]*w;
    f[i]=t[i]-d;
	}
	for(int i=0;i<n;i++)
	{	
	c=f[i];
	d=t[i];
	fs=c*100/d;
	si[i]=fs;
	printf("\nYour Attendence in Subject %d is :-%f",i+1,si[i]);	
	e+=si[i];
	}
	ag=e/n;
	printf("\n\nTotal Attendence is :-%f",ag);
}

void sub()
{
	printf("\nEnter the Total no of subject :-");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nEnter the Total no of class in a week for Subject %d :-",i+1);
		scanf("%d",&a[i]);
	}	
	
}

void display()
{
	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		printf("\n\n");
		printf("Name |Roll No |Marks |Attendence |\n\n\n");
		while( ( ch = fgetc(fp) ) != EOF )
		{
      		printf("%c",ch);
      	}
		
	}
	fclose(fp);
}

void find()
{
	struct student s;
	FILE *fp;
	
	char ch[20];
	printf("\nEnter Student Name :");
	scanf("%s",ch);
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %d %f %f",s.name,&s.rn,&s.mr,&s.at);
			if(strcmp(s.name,ch) == 0)
			{	
				
				printf("\n Record Found\n");
				printf("\n\t\tName ::%s",s.name);
				printf("\n\t\tRoll No ::%d",s.rn);
				printf("\n\t\tMarks ::%f",s.mr);
				printf("\n\t\tAgre attendence is ::%f",s.at);
			}
		}
		
	}

	fclose(fp);
}

void insert_details()
{
	
	FILE *fp;
	struct student s;
	printf("Enter Student Name :- ");	
	scanf("%s",s.name);
	printf("Enter Roll No :- ");	
	scanf("%d",&s.rn);
	printf("Enter Aggr. Marks :- ");	
	scanf("%f",&s.mr);
	calc();
	s.at=ag;
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %d %f %f\n",s.name,s.rn,s.mr,s.at);
		printf("\n\nRecord insert Sucessfull");
	}
		printf("\n");
	fclose(fp);
}


int main()
{
	int y;
	pass();
	if(flag==1||flag==2)
	{
		sub();
		printf("\n\n\nEnter your choice :-\n(1)Insert\n(2)Display\n(3)Search\n(4)Exit\n\n");
		scanf("%d",&y);
		switch(y)
		{
			case 1: insert_details();
			break;
			case 2: display();
			break;
			case 3: find();
			break;
			case 4: exit(0);
			break;
		}
	}
}

