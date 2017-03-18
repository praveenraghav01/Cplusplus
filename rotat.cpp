#include <iostream>
using namespace std;

int main(){
    int n,k,q,i,j,temp;
    cin>>n>>k>>q;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    while(k!=0)
        {
        temp=a[n-1];
        for(j=n-1;j>=0;j--)
            {
            a[j+1]=a[j];
          //  cout<<a[j+1];
        }
        a[0]=temp;
        //cout<<"#";
        k--;
    }
   for(i=0;i<q;i++)
        {
        cin>>temp;
        cout<<a[temp]<<endl;
    }
    
}

