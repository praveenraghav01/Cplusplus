#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *link;
}*f=NULL,*r=NULL,*nptr,*ptr,*prev;

insert()
{
	nptr=new node;
	cin>>nptr->info;
	if(f==NULL)
	{
		r=f=nptr;
		nptr->link=NULL;
	}
	else
	{
		r->link=nptr;
		nptr->link=NULL;
		r=nptr;
	}
}
    
	traverse()
	{
		cout<<"The values are:-\n";
		ptr=f;
		while(ptr!=NULL)
		{
			cout<<ptr->info<<endl;
			ptr=ptr->link;
		}
	}
	
	del()
	{
		f=f->link;
    }
    // remove /* */ to use input restrected program
  /*input restrected  
    del1()
    {
    ptr=f;
		while(ptr->link!=NULL)
		{
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=NULL;
		r=prev;
	}*/	
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
				  	       // del1();
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


