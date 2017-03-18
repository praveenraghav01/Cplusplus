#include<iostream>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--){
	cin>>n>>k;
	int r,sum=0,count=1;
	r=n-k;
	if(k>0){
	while(sum!=r)
	{
		sum+=count;
		count++;
	}
	cout<<count-1<<endl;
}
else
{
	cout<<"Impossible\n";
}
}
}
