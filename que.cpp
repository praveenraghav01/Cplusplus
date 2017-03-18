#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,f=1,r=0;
	cout<<"Enter the max value of queue:- ";
	cin>>n;
	int q[n];
	for(int i=0;i<n;i++)
	{
		r++;
		cout<<"Enter "<<i+1<<" value ";
		cin>>q[r];
	}
	cout<<"The values are:-"<<endl;
	for(f=1;f<=r;f++)
	{
		cout<<q[f]<<endl;	
	}
}
