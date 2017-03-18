#include<string>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s,as;
    cin >> s;
   
    int count=0;
    int n=s.length();
    int a=n/3;
    for(int i=0;i<n;i+=3)
        {
        as=s.substr(i,3);
        cout<<as<<endl;
        if(s[i]!='S'||s[i+1]!='O'||s[i+2]!='S')
            count++;
    }
    cout<<count;
}

