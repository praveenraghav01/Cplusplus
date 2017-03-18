#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int b,m,M,ka;
	double w1,w2;
	printf("Enter the value of B:\t");
	scanf("%d",&b);
	printf("Enter the value of m:\t");
	scanf("%d",&m);
	printf("Enter the value of M:\t");
	scanf("%d",&M);
	printf("Enter the value of ka:\t");
	scanf("%d",&ka);
	w1=sqrt(b*((1/m)+(1/M))+b*sqrt(pow(((1/m)+(1/M)),2)-(4*pow(sin(ka),2))/(m*M)));//Optical wave eqtn.
	w2=sqrt(b*((1/m)+(1/M))-b*sqrt(pow(((1/m)+(1/M)),2)-(4*pow(sin(ka),2))/(m*M)));//Acoustic wave eqtn.
	printf("value of w1(optical):\t%lf\n",w1);//Value with Sin^2ka.
	printf("Value of w2(acoustic):\t%lf\n",w2);
	if(ka<1)
	{
		w1=sqrt((2*b)/m);
		printf("Value of w1(optical):\t%lf\n",w1);//Value without Sin^2ka;
	}
	else
	{
		w2=sqrt((2*b)/M);
		printf("Value of w2(acoustic):\t%lf\n",w2);
	}
	getch();
}
