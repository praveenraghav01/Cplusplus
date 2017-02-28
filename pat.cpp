#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i, j, n;
	cout << "Enter the number of lines";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			cout <<j<< "\t";
		}
		cout << endl;
	}
	getche();
	return 0;
}
