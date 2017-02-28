#include<iostream>
using namespace std;
void rotate(long int arr[],long int n,long int k);
void arrrotate(long int arr[],long int n);
int main()
{
	long int n,k,q;
	cin>>n>>k>>q;
	long int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	rotate(arr,n,k);
	for(i=0;i<q;i++)
        {
        cin>>temp;
        cout<<a[temp]<<endl;
    }
}

void rotate(long int arr[],long int n,long int k)
{
	int i;
	for(i=0;i<k;i++)
	arrrotate(arr,n);
}

void arrrotate(long int arr[],long int n)
{
	int temp;
	temp=arr[n-1];
        for(j=n-1;j>=0;j--)
            arr[j+1]=a[j];
        arr[0]=temp;
}
