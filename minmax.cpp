#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
	int n,sd,min,max,m=0,mi=0;
	cin>>n;
	vector<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>sd;
		s.push_back(sd);
	}
	min=s[0];
	max=s[0];
	for(int i=0;i<n;i++)
	{
	    if(s[i]>max)
	    {
	    	m++;
	    	max=s[i];
		}
		else if(s[i]<min)
		{
			mi++;
			min=s[i];
		}
	}
	cout<<m<<" "<<mi;

	
}
