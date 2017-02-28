//sorting
#include<iostream>
using namespace std;
void accept(int Arr[], int s);
void display(int Arr[], int s);
void isort(int Arr[], int s);
void ssort(int Arr[], int s);
void bsort(int Arr[],int s);

int main()
{
	int Arr[100],n,choice;
	cout<<"Enter Size of Array ";
	cin>>n;
	do
	{
		cout<<"\n\nMENU";
		cout<<"\n1. Accept elements of array";
		cout<<"\n2. Display elements of array";
		cout<<"\n3. Sort the array using insertion sort method";
		cout<<"\n4. Sort the array using selection sort method";
		cout<<"\n5. Sort the array using bubble sort method";
		cout<<"\n6. Exit";
		cout<<"\n\nEnter your choice 1-6 :";
		cin>>choice;

		switch(choice)
		{
			case 1:	accept(Arr,n);
				break;
			case 2:	display(Arr,n);
				break;
			case 3:	isort(Arr,n);
				break;
			case 4:	ssort(Arr,n);
				break;
			case 5:	bsort(Arr,n);
				break;
			case 6:	break;
			default:cout<<"\ninvalid choice";
		}
	}while(choice!=6);

	return 0;
}

void accept(int Arr[], int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>Arr[i];
	}
}

void display(int Arr[], int s)
{
	cout<<"The elements of the array are:\n";
	for(int i=0;i<s;i++)
		cout<<Arr[i]<<" ";
}
//insertion sort
void isort(int Arr[], int s)
{
	int i,j,Temp;
	for(i=1;i<s;i++)
	{
		Temp=Arr[i];
		j=i-1;
		while((Temp<Arr[j]) && (j>=0))
		{
			Arr[j+1]=Arr[j];
			j--;
		}
		Arr[j+1]=Temp;
	}
}
// selection sort
void ssort(int Arr[], int s)
{
	int i,j,Temp,loc;
	for(i=0;i<s-1;i++)
	{
		loc=i;
		for(j=i+1;j<s;j++) 	//finding the smallest element
		if(Arr[j]<Arr[loc])
			loc=j;
		if(loc!=i)
		{
			Temp=Arr[i]; 		//Swapping
			Arr[i]=Arr[loc];
			Arr[loc]=Temp;
		}
	}
}
//buble sort
void bsort(int Arr[],int s)
{
	int i,j,Temp;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<(s-1-i);j++)
			if(Arr[j]>Arr[j+1])
			{
				Temp=Arr[j]; 	//swapping
				Arr[j]=Arr[j+1];
				Arr[j+1]=Temp;
			}
	}
}


