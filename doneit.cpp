#include<bits/stdc++.h>
using namespace std;
 vector<char>n;
void allSubsets(string array)
{
    int n=array.size();
  int numOfSubsets = 1 <<n;   
    int flag=0;
  for(int i = 0; i < numOfSubsets; i++)
    {
        int pos = n - 1; 
        int bitmask = i;
       while(bitmask > 0)
        {
            if((bitmask & 1) == 1)
               {
				   cout<<array[pos];
            		
			
			}
							bitmask >>= 1;
            pos--;
        }
        if(flag) //because for the first time NULL will be printed
       cout<<"\n";
       flag++;
     }
 
}
 
int main()
{
     
    string s;
    cin>>s;
     
     
    allSubsets(s);
}
