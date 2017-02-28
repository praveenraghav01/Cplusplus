#include <iostream>
using namespace std;
 
int main()
{
	int n;
    cin>>n;
    int arr[n];
    int max = -99999,min = 99999;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    	if(arr[i] < min)
    	{
    		min = arr[i];
    	}
    	if(arr[i] > max)
    	{
    		max = arr[i];
    	}
    }
    int count = 0;
    for(int i=min;i<=max;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(arr[j] == i)
    		{
    			count++;
    			break;
    		}
    	}
    	
    }
    if(count == max)
    {
    	cout<<"YES";
    }
    else
    {
    	cout<<"NO";
    }
    return 0;
}
