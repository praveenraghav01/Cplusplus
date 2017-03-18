#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int max(vector<long int>vec)
{
	int max=vec[0],pos;
	for(int i=1;i<vec.size();i++)
	{
		if(vec[i]>max)
		{
		max=vec[i];
		pos=i;
		}}
return pos;
}



vector<long int>hunger;
    vector<long int>re;
	
	int t;
	int n,m,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>x;
		hunger.push_back(x);
		}
		
		for(int i=0;i<n;i++)
	{
		if(hunger[i]<=m)
		{
			continue;
		}
				else
				{
					re.push_back(hunger[i]-m);
					position.push_back(i);
				}		
	}
	


if(re.empty())
cout<<n;
else{
	
int result=max(re)
cout<<result;
re.clear();
}





}
	
