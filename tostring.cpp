#include<iostream>
#include <sstream>
#include<string>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{	
		cin>>a[i];
		s=to_string(i);
		}
	}
	sort(s.begin(), s.end());
	cout<<s;
}
