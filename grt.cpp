#include <iostream>
#include<stdlib.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    int n,q,x,y;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
     qsort (a, n, sizeof(int), compare);
    cin>>q;
    for(int i=0;i<q;i++)
    {
    	int count=0;
    	cin>>x>>y;
    	int f=1,l=n;
    	int m=(l+f)/2;
    	while(f<l)
    	{
    		if(a[m]==y)
    		{
    			if(x==0)
    			{
    			for(int i=m;i<n;i++)
    			{
    				count++;
    			}
    			cout<<count<<endl;
    		}
    		else if(x==1)
    		{
    			for(int i=m+1;i<n;i++)
    			{
    				count++;
    			}
    			cout<<count<<endl;
    		}
    		}
    		else if(a[m]<y)
    		{
    			f=m+1;
    		}
    		else
    		{
    			l=m-1;
    		}
    	}
    		}
    
}

