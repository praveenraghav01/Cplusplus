//QUICK SHORT
#include<iostream>
#include<stdio.h>
using namespace std;
quick(int a[], int l, int h)
{
	int i,j,p,temp;
	if(l<h)
	{
		i=l,j=h,p=l;
		while(i<j)
		{
			while (a[i]<=a[p]&&i<=h)
			{
				i++;
			}
			while(a[j]>a[p]&&j>=l)
			{
				j--;
			}
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[p];
		a[p]=temp;
		quick(a,l,j-1);
		quick(a,j+1,h);
	
	}
}
int main()
{
int a[10];
cout<<"Enter the 10 values:-\n";
for(int i=0;i<10;i++)
{
	cin>>a[i];
	}	
	quick(a,0,9);
	cout<<"\nAter quick short:-\n";
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"\n";
	}
}
