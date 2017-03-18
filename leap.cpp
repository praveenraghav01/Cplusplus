#include <iostream>
using namespace std;

int main()
{
    int n,year;
    cin>>n;
for(int i=0;i<n;i++)
{
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "This is your birth year Mavis"<<endl;
            else
                cout << "Its not your birth year Mavis"<<endl;
        }
        else
            cout << "This is your birth year Mavis"<<endl;
    }
    else
        cout << "Its not your birth year Mavis"<<endl;
}
    return 0;
}
