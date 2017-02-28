#include<iostream>
#include<string>
#include<stack>
using namespace std;

void counter(string s)
{
	int i,j,answer=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==')')
		{
		continue;
	}
		else
		{
			for(j=i+1;s[j]!='\0';j++)
			{
				if(s[j]==')')
				{
					answer++;
					
				}
			}
		}
	}

cout<<endl<<answer;

}







void count(int left,int right)
{
		int previous=1;	
string s;
while(left!=0&&right!=0)
{
	s.append("(");
	s.append(")");
	left--;
	right--;
}
while(left!=0)
{
	s.append("(");
	left--;
}
while(right!=0)
{
	s.append(")");
right--;
}

for(int i=0;i<s.length();i++)
cout<<s[i];

counter(s);
}

int main()
{
	int left,right;
	cin>>left>>right;

count(left,right);
		
}
