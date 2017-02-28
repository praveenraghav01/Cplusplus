#include<stdio.h>
#include<conio.h>
int main()
 {
   int pro,res,i,j,inst,k=0,count1=0,count2=0; 
   printf("\n\t Enter No. of process :-\n");
   printf("\t\t");
   scanf("%d",&pro);                            
   printf("\n\tEnter No. of resources:-\n");
   printf("\t\t");
   scanf("%d",&res);                       
   int avail[res],max[pro][res],allot[pro][res],need[pro][res],completed[pro];
   for(i=0;i<pro;i++)
   completed[i]=0;                            
   printf("\n\tEnter No. of Available instanses\n");
   for(i=0;i<res;i++)
    {
     printf("\t\t");
     scanf("%d",&inst);
     avail[i]=inst;                       
    }
   printf("\n\tEnter Maximum No. of instances of resources that a process need:\n");
    for(i=0;i<pro;i++)
     {
        printf("\n\t For P[%d]",i);
        for(j=0;j<res;j++)
         {
            printf("\t");
            scanf("%d",&inst);
            max[i][j]=inst;              
         }
     }    
    printf("\n\t Enter no. of instances already allocated to process of a resource:\n");
     for(i=0;i<pro;i++)
     {
        printf("\n\t For P[%d]\t",i);
        for(j=0;j<res;j++)
         {
            printf("\t\t");
            scanf("%d",&inst);
            allot[i][j]=inst;
            need[i][j]=max[i][j]-allot[i][j];       
         } 
    }
    printf("\n\t Safe Sequence is:- \t");
    while(count1!=pro)
    {
    count2=count1;
    for(i=0;i<pro;i++)
     {
       for(j=0;j<res;j++)
        {
            if(need[i][j]<=avail[j])
              {
                 k++;
              }  
        }    
        if(k==res && completed[i]==0 )
         {
           printf("P[%d]\t",i);
           completed[i]=1;
           for(j=0;j<res;j++)
             {
               avail[j]=avail[j]+allot[i][j];
             } 
             count1++;
         }
         k=0;
       }
         if(count1==count2)
         {
         printf("\t\t Stop ..After this.....Deadlock \n");
         break;
       } 
 }
   getch();
} 
