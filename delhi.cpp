#include <iostream>
using namespace std;

int main()
{
    int n,c,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a>>b;
    	if(b==0)
    	{
    		for(int j=0;j<a;j++)
    		{
    			cin>>c;
    			if(c%2==0)
    			{
    				cout<<"yes"<<endl;
    			}
    			else
    			{
    				cout<<"no"<<endl;
    			}
    		}
    	}
    	else
    	{
    		for(int j=0;j<a;j++)
    		{
    			cin>>c;
    			if(c%2==0)
    			{
    				cout<<"no"<<endl;
    			}
    			else
    			{
    				cout<<"yes"<<endl;
    			}
    		}
    	}
    }
    return 0;
}
