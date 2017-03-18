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
	int n,i,item,val,count=0;
	cout<<"Enter the no of elements";
	cin>>n;
	cout<<"Enter the value of element:-"<<endl;
	for(i=0;i<n;i++)
{
    cin>>item;
	nptr=new node;
	nptr->info=item;
	if(head==NULL)
	{
		head=nptr;
		nptr->link=NULL;
		//cout<<nptr->info<<endl;
	}
	else
	{
		nptr->link=head;
		head=nptr;
			//cout<<nptr->info<<endl;
	}
}
    cout<<"Enter the item to be searched:-   ";
    cin>>val;
    	if(head==NULL)
    	{
    		cout<<"List is empty";
		}
		else
		{   ptr=head;
			while(ptr!=NULL)
			{
		  if(ptr->info==val)
		 {
		 	count++;
		 	ptr=ptr->link;
			 }	
			 else
			 {
			 	ptr=ptr->link;
			 }
		}
		
	}
	if(count>0)
	{
		cout<<"Iteam found!!!";
	}
	else
	{
		cout<<"Not found!!!";
	}
	}
