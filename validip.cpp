#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
int main ()
{
  string s;
  char str[64];
  int flag=0;
  cin>>str;
  char * pch;
  int l=(int)strlen(str);
    if(l>15||l<7)
    {
    	cout<<"NO";
	}
	else
	{
  pch = strtok (str,".");
  while (pch != NULL)
  {
    s=(string)pch;
    if(s>="0"&&s<="255")
    {
    flag=1;
    }
    else
    {
    	flag=0;
    	break;
	}
    pch = strtok (NULL, ".");
  }
  	if(flag==1)
			{
				cout<<"YES";
			}
			else
			{
				cout<<"NO";
			}
}

}
