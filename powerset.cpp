#include <stdio.h>
#include<iostream>
#include <math.h>
#include<list>
#include<vector>

using namespace std;
void all(string s,int n)
{
	
    for(int i=0;i<n;i++)
    {
        int x=0;
        while(s[i])
        {
            for(int y = 0; y <= x; y++)
                std::cout << s[y];
            std::cout << "\n";
            x++;
        }
        
    }

}

int main()
{
    string s;
    cin>>s;
    int len=s.length();    
	all(s,len);
     getchar();
    return 0;
}
