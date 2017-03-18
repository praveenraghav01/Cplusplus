#include<stdio.h> 
int main() 
{ 
 
  int i,j,n,time,remain,flag=0,tq=3,count=0; 
  int wt=0,tr=0,at[10],bt[10],rt[10]; 
  printf("\nName : Praveen Kumar\nSection : K1429\nRoll No : A11\nReg. No : 11409667\nQuestion No : 1");
 printf("\n\t*****************************************************\n");
  printf("Enter Total Process:\t "); 
  scanf("%d",&n); 
  remain=n; 
  for(i=0;i<n;i++) 
  { 
    printf("Enter Arrival Time and Burst Time for Process Process Number %d :",i+1); 
    scanf("%d",&at[i]); 
    scanf("%d",&bt[i]); 
    rt[i]=bt[i]; 
  } 
  
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
  for(time=0,i=0;remain!=0;) 
  { 
  count++;
    if(rt[i]<=tq && rt[i]>0) 
    { 
      time+=rt[i]; 
      rt[i]=0; 
      flag=1; 
      if(count==1)
      tq=6;
      else if(count>1)
      tq=remain;
    } 
    else if(rt[i]>0) 
    { 
      rt[i]-=tq; 
      time+=tq; 
      if(count==1)
      tq=6;
      else if(count>1)
      tq=remain;
    } 
    if(rt[i]==0 && flag==1) 
    { 
      remain--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",i+1,time-at[i],time-at[i]-bt[i]); 
      wt+=time-at[i]-bt[i]; 
      tr+=time-at[i]; 
      flag=0; 
      if(count==1)
      tq=6;
      else if(count>1)
      tq=remain;
    } 
    if(i==n-1) 
      i=0; 
    else if(at[i+1]<=time) 
      i++; 
    else 
      i=0; 
      
  } 
  printf("\nAverage Waiting Time= %f\n",wt*1.0/n); 
  printf("Avg Turnaround Time = %f",tr*1.0/n); 
  
  return 0; 
}
