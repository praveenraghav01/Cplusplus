#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*head=NULL,*ptr,*nptr;
insert() //insertion into last
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
		ptr=head->link;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=nptr;
		nptr->link=NULL;
		head->info=++(head->info);
		cout<<head->info<<endl;
	}

}
traverse()
{
	ptr=head->link;
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->link;
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
    traverse();
}
