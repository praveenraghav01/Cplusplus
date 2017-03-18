#include <iostream>
#include <conio.h>
using namespace std;
void merge(int *,int, int , int );
void mergesort(int *a, int beg, int end)
{
    int mid;
    if (beg < end)
{
	   mid=(beg+end)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,end,mid);
    }
    return;
}
void merge(int *a, int beg, int end, int mid)
{
    int i, j, k, c[50];
    i = beg;
    k = beg;
    j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= end)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = beg; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{
    int a[20], i, b[20];
    cout<<"enter  the elements\n";
    for (i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    mergesort(a, 0, 4);
    cout<<"sorted array\n";
    for (i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    cout<<"enter  the elements\n";
    for (i = 0; i < 5; i++)
    {
        cin>>b[i];
    }
    mergesort(b, 0, 4);
    cout<<"sorted array\n";
    for (i = 0; i < 5; i++)
    {
        cout<<b[i];
    }
    getch();
}
