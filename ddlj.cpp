#include<iostream>
using namespace std;
int main()
{
	int n,r,s;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>r>>s;
		if(r==s)
		{
			cout<<r;
		}
		else{
		while(r!=0)
		{
			r++;
			bool isPrime = true;
			if(r==s)
			{
			 break;
			}
			else
			{
			for(i = 2; i <= r/2; ++i)
  			 {
      			if(r%i==0)
      	    		 {
          				isPrime = false;
          				break;
      				 }
  			 }
  			if(isPrime)
  			 {
  				s++;
  			 }
  			else
  			 {
  				s--;
  			 }
			
		    }
		}
		cout<<r<<endl;
	}
	}
}

