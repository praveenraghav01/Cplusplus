#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,low, high, i, flag;
    cin>>x;
    while(x--)
    {
    cin >> low >> high;
    while (low < high)
    {
        flag = 0;
	if(low==1) {
        		flag=1;
			}
			else{
			
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
            
        }
    }

        if (flag == 0)
            cout << low << "\n";

        ++low;
    }
}

	
}
