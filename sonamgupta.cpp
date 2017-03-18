#include <bits/stdc++.h>
using namespace std;
 
int main(){
     int tc;
	 cin>>tc;
	 while(tc--){
	 	int start,end;
	 	cin>>start>>end;
	 	
	 	if(start>=end)
	 		{
	 			cout<<abs(end-start)<<endl;
	 			continue;
	 		}
 
	 	int count=0;
	 	int s=end;
	 	while(true){
	 		if(s<=start)
	 			break;
	 		else{
	 			count++;
	 			
	 			if(s%2==0)
	 				s=s/2;
	 			else
	 				s++;
	 		}
	 	}
	 	cout<<	count + start - s <<endl;
	 }
	return 0;
}
