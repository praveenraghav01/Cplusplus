#include<iostream>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    bool boo=true;
    string s1,s2;
    while(T--)
    {
    	boo = false;
    	cin>>s1>>s2;
    //	int f1=1,f2=1;
    	int i=0,j=0;
    	while(i<s1.length())
    	{
    		if(s1[i]==s2[j])
    			j++;
    		i++;
    	}
    	if(j==s2.length())
    	{
    		i=0;
    		j=s2.length()-1;
    		while(i<s1.length())
    		{
    			if(s1[i]==s2[j])
    				j--;
    			i++;
    		}
    		if(j==-1)
    			boo = true;
    		
    	}
    	if(boo)
    		cout<<"GOOD STRING"<<endl;
    	else
    		cout<<"BAD STRING"<<endl;
    	
    	
    }
    
    return 0;
}
