#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>a;
    int x,sum=0;
    for(int i=0;i<5;i++)
        {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<5;i++)
        {
        sum+=a[i];
    }
    int min=sum-a[0];
    int max=sum-a[4];
    cout<<sum<<min<<" "<<max;
    return 0;
}

