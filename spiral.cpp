#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int t,b,n,k,p;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>k>>p;
		if(p>n)
		{
			p=p-n;	
		}
		int a=k+p-1;
		if(a>n)
		{
			 b=a-n;
		}
		else
		{
			 b=k+p-1;
			
		}
		
		if(b%2==0)
		{
		cout<<abs(b)<<" "<<"truth"<<endl;	
		}
		else
		{
			
		cout<<abs(b)<<" "<<"dare"<<endl;
		}
	}
}
