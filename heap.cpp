//HEAP
#include<iostream>
#include<conio.h>
using namespace std;
int a[10],i,n;

int makeheap(int n)
{
	int val,k,par;
	for(i=1;i<n;i++)
	{
		val=a[i];
		k=i;
		par=(k-1)/2;
		while(k>0&&a[par]<val)
		{
			a[k]=a[par];
			k=par;
			par=(k-1)/2;
			a[k]=val;
		}
	}
}

int heapsort()
{
	int temp;
	for(i=9;i>0;i--)
	{
		temp=a[i];
		a[i]=a[0];
		a[0]=temp;
		makeheap(i);
	}
}

int main()
{
	cout<<"Enter the values\n";
	for(i=1;i<10;i++)
	{
		cin>>a[i];
	}
	makeheap(10);
	cout<<"After makeheap\n";
	for(i=1;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	heapsort();
	cout<<"After heapsort\n";
	for(i=1;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
}
