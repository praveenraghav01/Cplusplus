#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
   int a[4],b[4],c[4],d[4],final[4],d1[4],final1[4],i;
cout<<"SENDERS SIDE\n";
cout<<"Enter the values of a=\n";   
   for(i=0;i<4;i++)
   {


                   cin>>a[i];
   }
cout<<"Enter the values of b=\n";
   for(i=0;i<4;i++)
   {


                   cin>>b[i];
   }
cout<<"Enter the values of c=\n";
   for(i=0;i<4;i++)
   {


                   cin>>c[i];
   }
cout<<"The value after OR operation is---->";  
   for (i=0;i<4;i++)
   {
     if(a[i]==1||b[i]==1||c[i]==1)
     {
                                  d[i]=1;
     }
    else
     {
                                  d[i]=0;
     }
     cout<<d[i];
   }
cout<<"\n";
cout<<"The value after complimenting is--->";
 for(i=0;i<4;i++)
   {
     if(d[i]==1)
     {
                final[i]=0;
     }
     else
     {
                final[i]=1;
     }
     cout<<final[i];
   }  
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"RECIEVERS SIDE\n";
cout<<"The value after OR operation is--->";
 for (i=0;i<4;i++)
   {
     if(a[i]==1||b[i]==1||c[i]==1||final[i]==1)
     {
                                  d1[i]=1;
     }
    else
     {
                                  d1[i]=0;
     }
     cout<<d1[i];
   }
cout<<"\n";
cout<<"The value after complimenting is--->";
 for(i=0;i<4;i++)
   {
     if(d1[i]==1)
     {
                final1[i]=0;
     }
     else
     {
                final1[i]=1;
     }
     cout<<final1[i];
   }    
getch();
}


