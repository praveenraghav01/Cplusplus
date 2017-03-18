#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define LL long long
const int N=110;
int s,sum;
char a[N];
LL l,r;

LL cal(LL n)
{
	LL ans=(n/s)*(LL)sum,mod=n%s;
	for (int i=1;i<=mod;i++)
		if (a[i]=='B')
			ans++;
	return ans;
}

void work()
{
	int i;
	sum=0;
	for (i=1;i<=s;i++)
		if (a[i]=='B')
			sum++;
	cout<<cal(r)-cal(l-1)<<endl;
}

int main()
{
	int T,i;
	cin>>T;
	for (i=1;i<=T;i++)
	{
		cin>>a+1>>l>>r;
		s=strlen(a+1);
		printf("Case #%d: ",i);
		work();
	}
	return 0;
}
