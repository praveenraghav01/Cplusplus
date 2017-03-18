#include<iostream>
#include<conio.h>
using namespace std;
int towers(int n, char s, char d, char t)
{
	if(n==1)
	{
		cout<<s<<"to"<<d<<"\n";
		return 0;
	}
	towers(n-1,s,t,d);
	cout<<s<<"to"<<d<<"\n";
	towers(n-1,t,d,s);
}
int main()
{
	int n;
	cin>>n;
	towers(n,'A','C','B');
}
