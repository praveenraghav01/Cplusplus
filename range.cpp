#include<iostream>
using namespace std;

void sum1(long s)
{
	long low=0,sum=0,i;
	 while (low < s)
    {
       int flag = 0;
	if(low==1) {
        		flag=1;
			}
			else{
			
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
            
        }
    }

        if (flag == 0)
		{sum+=low;}

        ++low;
    }
cout<< sum<<endl;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	long bin,dec = 0, rem, num, base = 1;
		cin>>num;
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    sum1(dec;
	}
}

