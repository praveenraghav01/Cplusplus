//BUBBLE SHORT
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:- "<<endl;
	cin>>n;
	int a[n],temp=0,i,j;
	cout<<"Enter the element of array:-"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	//BUBBLE SHORT
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<"Shorted Array is:-"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
