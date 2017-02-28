#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string s;
    int count=0;
    cin>>n;
    while(n--)
    {
    	cin>>s;
    	for(int j=0;j<s.length();j++)
    	{
    		if(s[j]=='A'||s[j]=='a'||s[j]=='E'||s[j]=='e'||s[j]=='I'||s[j]=='i'||s[j]=='O'||s[j]=='o'||s[j]=='U'||s[j]=='u')
    		{
    		count++;
    		}
    	}
    	cout<<count<<endl;
    	count=0;
    }
}

