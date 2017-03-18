#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main()
{
	long long n,q,h;
	ostringstream oss;
	cin>>n>>q;
	long long l[n],r[n];
	string f;
	for(int i=0;i<n;i++)
	{
		cin>>l[i]>>r[i];
		for(int j=l[i];j<=r[i];j++)
		{
			f.append(to_string(j));
		}
		
	}
	cout<<f;
	for(int i=0;i<q;i++)
	{
		cin>>h;
		for(int j=0;j<f.length();j++)
		{
			if(j==h)
			{
				cout<<f[j]<<endl;
			}
		}
	}
}
