#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*head=NULL,*ptr,*nptr;
void insert()
{
	int item;
	cout<<"Enter the value";
	cin>>item;
	nptr=new node;
	nptr->info=item;
	if(head==NULL)
	{
	    head=nptr;
		nptr->link=NULL;
		// cout<<nptr->info<<endl;
	}
	else
	{
		nptr->link=head;
		head=nptr;
		//cout<<nptr->info<<endl;
	}
}
	void insert_m()
	{
		int item;
    	cout<<"Enter the value";
    	cin>>item;
	    nptr=new node;
    	nptr->info=item;
    	int val;
    	cout<<"Enter the value after which you want to enter the node:-";
		cin>>val;
		ptr=head;
		while(ptr!=NULL)
		{
			if(ptr->info==val)
			{
				nptr->link=ptr->link;
				ptr->link=nptr;
				break;
			}
		}
	}
	void print()
	{
		if(head==NULL)
		{
			cout<<"\nlink";
		}
		else
		{
		ptr=head;
	 	while(ptr!=NULL)
	 	{
	 		cout<<"The value of element:-";
			 cout<<ptr->info<<endl;
	 		ptr=ptr->link;
		 }
		}
	}
	int main()
	{
		int n;
		cout<<"Enter the number of nodes you want to insert:-  ";
		cin>>n;
		for(int i=0;i<n;i++)
		{
		insert();
	    }
		insert_m();
		print();
	}
