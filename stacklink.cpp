#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *link;
}*top=NULL,*nptr,*ptr;

insert()
{
	nptr=new node;
	cin>>nptr->info;
	if(top==NULL)
	{
		top=nptr;
		nptr->link=NULL;
	}
	else
	{
		nptr->link=top;
		top=nptr;
	}
}
    
	traverse()
	{
		cout<<"The values are:-\n";
		ptr=top;
		while(ptr!=NULL)
		{
			cout<<ptr->info<<endl;
			ptr=ptr->link;
		}
	}
	
	del()
	{
		top=top->link;
	}
	
	int main()
	{
	int n,i,b;
    int a;
	cout<<"Enter the no of element you want to enter:- ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		insert();
	}
	traverse();
	cout<<"PRESS 1 to delete the element else PRESS 2:- ";
	cin>>a;
	switch(a)
	{
		case 1: cout<<"Are you sure want to  delete PRESS 1 (OK) or 2 (CANCEL):- ";
		          cin>>b;
				  switch(b)
				  {
				  	case 1: cout<<"Element DELETED !!!\n";
				  	        del();
				  	        traverse();
				  	        break;
				  	case 2: cout<<"Canceled!!!";
					        break;        
				  }
				  break;
		case 2: cout<<"Thanks";
		        break;		  
	}
}


