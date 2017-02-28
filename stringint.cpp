#include<iostream>
#include <sstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	string s,f;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{	
		cin>>a[i];
		s+=to_string(a[i]);
		}
	sort(s.begin(), s.end());
	for(int i=s.length()-1;i>=0;i--)
	f+=s[i];
	cout<<f<<endl;
		s.clear();
		f.clear();
	}
}
