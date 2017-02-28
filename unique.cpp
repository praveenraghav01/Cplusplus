#include <iostream>     
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

void printDistinct(int arr[], int n, int q)
{
	int count=0;
    sort(arr, arr + n);
    for (int i=q; i<n; i++)
    {
       while (i < n-1 && arr[i] == arr[i+1])
          i++;
       count++;
       
    }cout<<count;
}


int main(){
	int n,t,q,x,z;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(t--)
	{
		cin>>q;
		printDistinct(a,n,q-1);
	}
	
	
	





}
