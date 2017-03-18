#include<iostream>
using namespace std;
int main()
{
	int m[5][5]={1,2,9,10,25,4,3,8,11,24,5,6,7,12,23,16,15,14,13,22,17,18,19,20,21};
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int j=0;j<5;j++)
		{
			for(int k=0;k<5;k++)
			{
				if(m[j][k]==n)
				{
					cout<<"("<<j+1<<","<<k+1<<")"<<endl;
				}
			}
		}
			
	}
}
