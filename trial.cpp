#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	
	map<int,char> n;
		
n.insert( make_pair(1,'a'));
n.insert( make_pair(2,'b'));
n.insert( make_pair(3,'c'));
n.insert( make_pair(4,'d'));
n.insert( make_pair(5,'e'));
n.insert( make_pair(6,'f'));
n.insert( make_pair(7,'g'));
n.insert( make_pair(8,'h'));
n.insert( make_pair(9,'i'));
n.insert( make_pair(10,'j'));
n.insert( make_pair(11,'k'));
n.insert( make_pair(12,'l'));
n.insert( make_pair(13,'m'));
n.insert( make_pair(14,'n'));
n.insert( make_pair(15,'o'));
n.insert( make_pair(16,'p'));
n.insert( make_pair(17,'q'));
n.insert( make_pair(18,'r'));
n.insert( make_pair(19,'s'));
n.insert( make_pair(20,'t'));
n.insert( make_pair(21,'u'));
n.insert( make_pair(22,'v'));
n.insert( make_pair(23,'w'));
n.insert( make_pair(24,'x'));
n.insert( make_pair(25,'y'));
n.insert( make_pair(26,'z'));
	
	
	map<char,int> m;
	m.insert( make_pair('a', 1));
	m.insert( make_pair('b', 2));
	m.insert( make_pair('c', 3));
	m.insert( make_pair('d', 4));
	m.insert( make_pair('e', 5));
	m.insert( make_pair('f', 6));
	m.insert( make_pair('g', 7));
	m.insert( make_pair('h', 8));
	m.insert( make_pair('i', 9));
	m.insert( make_pair('j', 10));
	m.insert( make_pair('k', 11));
	m.insert( make_pair('l', 12));
	m.insert( make_pair('m', 13));
	m.insert( make_pair('n', 14));
	m.insert( make_pair('o', 15));
	m.insert( make_pair('p', 16));
	m.insert( make_pair('q', 17));
	m.insert( make_pair('r', 18));
	m.insert( make_pair('s', 19));
	m.insert( make_pair('t', 20));
	m.insert( make_pair('u', 21));  
  m.insert( make_pair('v', 22));
m.insert( make_pair('w', 23));
m.insert( make_pair('x', 24));
m.insert( make_pair('y', 25));
m.insert( make_pair('z', 26));
string s,r,f;
int t,pos=0;
cin>>t;
while(t--)
{
cin>>s;
for(int i=s.length()-1;i>=0;i--)
r+=s[i];
for(int i=0;i<s.length();i++)
{
	pos=m.at(s[i])+m.at(r[i]);
	if(pos<=26)
	{
		f+=n.at(pos);
	}
	else
	{
		pos=pos-26;
		f+=n.at(pos);
	}
}
cout<<f;
s.clear();
r.clear();
f.clear();
}

}
