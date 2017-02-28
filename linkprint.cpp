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
	int n,i,item;
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
    cout<<"The elements are:-";
	if(head==NULL) 
	{
		cout<<"List is empty";
		
	 } 
	 else
	 {
	 	ptr=head;
	 	while(ptr!=NULL)
	 	{
	 		//cout<<"The value of element:-";
			 cout<<ptr->info<<endl;
	 		ptr=ptr->link;
		 }
	 }
}

