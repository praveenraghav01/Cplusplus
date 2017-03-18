
int main()
{
	vector<long int>hunger;
    vector<long int>re;
	int t;
	int n,m,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>x;
		hunger.push_back(x);
		}
	for(int i=0;i<n;i++)
	{
		if(hunger[i]<=m)
		{
			continue;
		}
				else
				{
					re.push_back(i);
				}		
	}


if(re.empty())
cout<<n;

else
{
int len=re.size();
cout<<re[len-1]+1;
re.clear();
}
}
	}
	
