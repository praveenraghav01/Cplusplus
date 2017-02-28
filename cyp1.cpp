#include<iostream>
using namespace std;
int main()
{
	int x;
	char m,n;
	cin>>x;
	int yash=0,rom=0;
	while(x--)
	{
		cin>>m>>n;
		if(m=='s'&&n=='a')
		{
			yash+=1;
		}
		else if(m=='c'&&n=='r')
		{
			rom+=2;
		}
		else if(m=='s'&&n=='r')
		{
			rom+=1;
		}
		else if(m=='c'&&n=='a')
		{
			yash+=3;
		}
	}
		cout<<yash<<" "<<rom;
}
