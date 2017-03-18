#include <bits/stdc++.h>
using namespace std;
long long a[1005][1005];
int main(){
	// freopen( "/home/prabhu/Desktop/input.txt" , "r" , stdin );
	// freopen( "/home/prabhu/Desktop/output.txt","w", stdout );
	int n;
	
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
	}
	long  long t1=0,t2=0,t3=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i-1>=0 and j-1>=0)
				t1=a[i-1][j-1];
 
			if(i-1>=0 and j>=0)
				t2=a[i-1][j];
 
			if(i-1>=0 and j+1>=0)
				t3=a[i-1][j+1];
 
			a[i][j]+=max(t1,max(t2,t3));
		}
	}
	long long ans=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			ans=max(ans,a[i][j]);
		}//cout<<endl;
	}
 
	cout<<ans;
	return 0;
}
