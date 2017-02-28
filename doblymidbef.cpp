// Dobly Link List AT Any Place before 
#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *plink,*flink;
}*head=NULL,*prev,*tail=NULL,*nptr,*ptr;

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

int insertm()
{
	nptr=new node;
	int item;
	cout<<"Enter the Value";
	cin>>item;
	nptr->info=item;
	ptr=head;
	while(ptr!=NULL)
	{
		prev=ptr;
		if(ptr->info==5)
		{
			break;
		}
		else
		{
			ptr=ptr->flink;
		}
	}
	nptr->plink=ptr->plink;
	nptr->flink=ptr;
	ptr->plink=nptr;
	nptr->plink->flink=nptr;
}

int deletel()
{
	ptr=tail;
	tail=ptr->plink;
	tail->flink=NULL;
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
      insertm();
	traverse();
}
