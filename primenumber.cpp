#include <bits/stdc++.h>
using namespace std;
 	vector<int>v;
 	
void SieveOfEratosthenes(int n)
{
    
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
              if (prime[p] == true)
        {
            
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    
    for (int p=2; p<=n; p++)
       if (prime[p])
          v.push_back(p);


}
int gohead(int n)
{int count=0;
	for(int i=1;i<=n/2;i++)
	{
		if(n==2)
		{
			
		}
		else
		{
		count++;
		}
	}
	return count;
}
 

int main()
{
	int n,t,final=0,count,x;
	cin>>t;
	while(t--)
	{
	cin>>n;
	v.clear();
	SieveOfEratosthenes(n);
	for(int i=0;i<v.size();i++)
	{
		x=v[i];
	count=gohead(x);
	final+=count;
	}
	cout<<final<<endl;
	final=0;
}
}
