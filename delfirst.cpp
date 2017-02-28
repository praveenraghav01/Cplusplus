// Dobly Link List DELETE First
#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *plink,*flink;
}*head=NULL,*tail=NULL,*nptr,*ptr;

int insert()
{
	nptr=new node;
	int item;
	cout<<"Enter the Value";
	cin>>item;
	nptr->info=item;
	if (head==NULL)
	{
		head=nptr;
		tail=nptr;
		nptr->plink=NULL;
		nptr->flink=NULL;
	}
	else
	{
		ptr=head;
		nptr->flink=ptr;
		nptr->plink=NULL;
		ptr->plink=nptr;
		head=nptr;	
	}
}

int deletef()
{
	ptr=head;
	head=ptr->flink;
	head->plink=NULL;
}

int traverse()
{
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<endl;
		ptr=ptr->flink;
	}
}

int main()
{
	int n,i;
	cout<<"Enter the no of element you want to enter";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		insert();
	}
	deletef();
	traverse();
}
