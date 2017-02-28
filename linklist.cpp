#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*head=NULL,*ptr,*nptr;
int main()
{
P:	int item;
	cout<<"Enter the value:-";
	cin>>item;
	char a;
	nptr=new node;
	nptr->info=item;
	if(head==NULL)
	{
		head=nptr;
		nptr->link=NULL;
		cout<<nptr->info<<endl;
	}
	else
	{
		nptr->link=head;
		head=nptr;
			cout<<nptr->info<<endl;
	}
	cout<<"You want to enter new node (Y/N)";
	cin>>a;
	if(a=='y')
	{
		goto P;
	} 
	else
	{
		exit;
	}
}

