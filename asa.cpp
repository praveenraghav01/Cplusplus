#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
/*	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*\t";
		}
		cout<<"\n";
	}*/
	/*  *************
		**********
		********
		*****/   
		for(int i=n;i>=1;i-2)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*\t";
		}
		cout<<"\n";
	}

}
