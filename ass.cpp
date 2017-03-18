#include<stdio.h>
#include<conio.h>
int main()
{
	int n=0;
	char a[10],s;
	p: printf("Enter the details of Visitor\nName:");
	   gets(a);
	n++;
	printf("Id\t:%d\nName\t:",n);
	puts(a);
	printf("Do you want to enter new record Y/N");
	scanf("%c",&s);
	if(s=='y'||s=='Y')
	goto p;
	else
	printf("Thank you");
	getch();
}

