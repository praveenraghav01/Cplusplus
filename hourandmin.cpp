#include<iostream>
#include <stdlib.h>
using namespace std;

int min(int x, int y) { return (x < y)? x: y; }
 
int calcAngle(long long h, long long m)
{
    if (h <0 || m < 0 || h >12 || m > 60)
        cout<<"Wrong input";
 
    if (h == 12) h = 0;
    if (m == 60) m = 0;
    int hour_angle = 0.5 * (h*60 + m);
    int minute_angle = 6*m;
    int angle = abs(hour_angle - minute_angle);
    angle = min(360-angle, angle);
 
    return angle;
}

int main()
{
	long long h,m,t,s,f=0;
	cin>>h>>m>>t;
	while(t--){
		cin>>s;
		f=m+s;
		if(f>60)
		{
			m=f-60;
			h++;
			cout<<calcAngle(h,m)<<endl;
		}
		else if(f==60)
		{
			h++;m=0;
			cout<<calcAngle(h,m)<<endl;
		}
		else
		{
			m+=s;
			cout<<calcAngle(h,m)<<endl;
		}
}
    return 0;
}
