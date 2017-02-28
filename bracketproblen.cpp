#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,flag,m;
string s,d;
cin>>m;
while(m--)
{
cin>>s;
n=s.length();
if(n%2!=0)
{
cout<<"NO\n";
}
else
{
	d.clear();
for(int i=n-1;i>=n/2;i--)
{
d+=s[i];
}
for(int i=0;i<n/2;i++)
{
if(s[i]=='('&& d[i]==')'||s[i]=='['&& d[i]==']'||s[i]=='{'&& d[i]=='}')
{
flag=1;
}
else
{
	flag=0;
	break;
}
}

if(flag==1)
{
cout<<"YES\n";
}
else
{
cout<<"NO\n";
}
}
s.clear();
d.clear();
}



}
