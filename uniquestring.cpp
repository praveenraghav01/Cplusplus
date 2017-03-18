#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   int su=0;
   cin>>s;
   int a[26]={0};
   for(int i=0;i<s.length();i++)
   {
   	if(s[i]>='A'&&s[i]<='Z')
   	{
       a[s[i]-'A']++; 
       cout<<s[i]<<endl;
	}
       else
	   {
	   	cout<<s[i]<<endl;
	   continue;
	   }
   }
   for(int i=0;i<26;i++)
   {
   	if(a[i]>1)
   	{
   		su+=a[i]-1;
	}
   }
   cout<<(s.length()-su);
    return 0;
}

