#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n,y,z;
    string x;
    map<string,int>m;
    cin>>n;
    while(n--)
        {
        cin>>z>>x>>y;
        if(z==1)
            {
            m.insert(make_pair(x,y));
        }
        else if(z==2)
            {
            m.erase(x);
        }
        else
            {
            map<string,int>::iterator it=m.find(x);
            {
                if(it!=m.end())
                    {
                    cout<<m.find(x)->second<<endl;
                }
                else
                    {
                    cout<<"0"<<endl;
                }
            }
        }
    }
    return 0;
}

