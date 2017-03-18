/*____             _                 
|  _ \ __ _  __ _| |__   __ ___   __
| |_) / _` |/ _` | '_ \ / _` \ \ / /
|  _ < (_| | (_| | | | | (_| |\ V / 
|_| \_\__,_|\__, |_| |_|\__,_| \_/  
            |___/
*/
#include <bits/stdc++.h>
using namespace std;
#define fre 	freopen("0.in","r",stdin),freopen("0.out","w",stdout)

int find(string s)
{
	int a[27]={0};int su=0;
   for(int i=0;i<s.length();i++)
   {
   	if(s[i]>='A'&&s[i]<='Z')
   	{
       a[s[i]-'A']++; 
	}
       else if(s[i]==' ')
	   {
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
   return s.length()-su;
}


int main()
{
//	freopen("0l.in","r",stdin);
//	freopen("0l.out","w",stdout);

	int T,test = 0,p=0,min=0,flag=0;
	vector<string> ss;
	vector<int> na;
	vector<int> no;
	string ab;
	cin>>T;

	while(T--)
	{
		test++;
		cin>>p;
		for(int i=0;i<p;i++)
		{
			cin.clear(); cin.sync();
			getline(cin,ab);
			ss.push_back(ab);
		}	
		sort(ss.begin(),ss.end());
		for(int i=0;i<p;i++)
		{
			na.push_back(find(ss[i]));
		}

		int value = distance(na.begin(), max_element(na.begin(), na.end()));
		cout<<"Case #"<<test<<": "<<ss[value]<<"\n";
		ss.clear();
		na.clear();
	}
}
