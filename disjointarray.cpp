#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,e,d=0;
	cin>>x;
	int r[x];
	e=x;
	while(x--)
	{
		long int a,b;
		cin>>a>>b;
		long int f[a],s[b];
		for(int i=0;i<a;i++) cin>>f[i];
		for(int i=0;i<b;i++) cin>>s[i];
		int count=0;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(f[i]==s[j])
				{
					count++;
				}
			}
		}
		r[d]=count;
		d++;
		
	}
	for(int i=0;i<e;i++) cout<<r[i]<<"\n";
}
