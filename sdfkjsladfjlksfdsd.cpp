#include<bits/stdc++.h>
using namespace std;





int main()
{
	int n,r,c,rot,temp=0,col;
	cin>>n>>r>>c;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}


while(r--)
{
		cin>>rot;		
		temp=a[rot][n-1];
		for(int j=n-1;j>=0;j--)
		{
			a[rot][j]=a[rot][j-1];
		}
		a[rot][0]=temp;
}
while(c--)
{
		cin>>col;		
		temp=a[n-1][col];
		for(int j=n-1;j>=0;j--)
		{
			a[j][col]=a[j-1][col];
		}
		a[0][col]=temp;
}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}







}
