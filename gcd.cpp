#include <stdio.h>
int gcd(int x, int y)
{
	while (x %= y)
	{
		int t = x;
		x = y;
		y = t;
	}
	return y;
}
int main()
{
	int x = 100, y = 60, z = 12;
	int ans = gcd(gcd(x, y), z);
	printf("%d",ans);
	return 0;
}
