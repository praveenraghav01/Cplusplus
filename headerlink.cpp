// header link list
#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*head=NULL,*ptr,*nptr;
int insert() //insertion into begning
{
	int item;
	cout<<"Enter the value:-";
	cin>>item;
	char a;
	nptr=new node;
	nptr->info=item;
	if(head->link==NULL)
	{
		head->link=nptr;
		nptr->link=NULL;
		head->info=++(head->info);
		cout<<head->info<<endl;
	}
	else
	{
		nptr->link=head->link;
		head->link=nptr;
		head->info=++(head->info);
		cout<<head->info<<endl;
	}

}

int main()
{
	head=new node;
	head->link=NULL;
	head->info=0;
	int n;
	cout<<"Enter the no of elements:-  ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	insert();
}
}
