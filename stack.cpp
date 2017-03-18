#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,top=0;
	cout<<"Enter the max value of stack:- ";
	cin>>n;
	int s[n],val;
	for(int i=0;i<n;i++)
	{
		top++;
		cout<<"Enter "<<i+1<<" value ";
		cin>>val;
		s[top]=val;
	}
	cout<<"The values are:-"<<endl;
	for(top=n;top>0;top--)
	{
		cout<<s[top]<<endl;	
	}
}
