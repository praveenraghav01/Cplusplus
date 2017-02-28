#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,x;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
        {
        cout<<a[i]<<endl;
        
    }
    return 0;
}

