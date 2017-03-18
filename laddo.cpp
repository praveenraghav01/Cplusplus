#include <iostream>
#include <queue>
using namespace std;
 
int main()
{
	int n,m,t;
	cin>>t;
	
	while(t--)
{
	cin>>n>>m;
	int arr[n],x;
	queue<int> q;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		q.push(i);
	}
	while(!q.empty()){
		x=q.front();
		q.pop();
		if(arr[x]>m){
			arr[x]-=m;
			q.push(x);
		}
	}
	cout<<x+1<<endl;
	
}	
    return 0;
}
