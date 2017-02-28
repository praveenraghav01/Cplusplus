//priority scheduling
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void context()
{
	printf("\nContext Switching done!!!\n");
}
int main()
{
 int n,b[10],w[10],i,j,h,t,tt;
 int stime[10],a[10],p[10];
 float avg=0;
 printf("\nName : Praveen Kumar\nSection : K1429\nRoll No : A11\nReg. No : 11409667\nQuestion Number : 14\n");
 printf("\n\t*****************************************************\n");
 printf("\nEnter Number of processor:\t");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("Enter burst time & priority for Process %d:",i);
  scanf("%d %d",&b[i],&p[i]);  a[i]=i;
 }
    for(i=1;i<=n;i++)
     context();
           for(j=i;j<=n;j++)
              if(p[i]<p[j])
              {
              t=b[i]; tt=a[i];
              b[i]=b[j]; a[i]=a[j];
              b[j]=t;     a[j]=tt;
              }

 w[1]=0;


 printf("\nprocess %d waiting time is 0",a[1]);
 for(i=2;i<=n;i++)
 {
  w[i]=b[i-1]+w[i-1];
  printf("\nProcess %d waiting time: %d",a[i],w[i]);
  avg+=w[i];
 }
 printf("\n\nTotal waiting time:%f",avg);
 printf("\n\nThe average waiting time is:%f\n",avg/n);

getch();
}

