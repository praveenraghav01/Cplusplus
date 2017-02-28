#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main ()
{
  int i=0,count=1,n;
  string str;
  char c;
  cin>>n;
  while(n--)
  {
  cin>>str;
  for(int i=0;i<str.length();i++)
  {
    c=str[i];
    if (isupper(c)) 
	count++;
  }
  cout<<count<<endl;
  count=1;
}

  return 0;
}
