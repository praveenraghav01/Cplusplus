#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
    int n,i,j,temp=0,count=0;
    cin >> n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(a[i]==a[j])
                {
                b[temp]=j-i;
                temp++;
               
            }
        }
    }
    cout<<*std::min_element(b,b+n);
    return 0;
}

