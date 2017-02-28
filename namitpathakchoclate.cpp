#include<stdio.h>
#include<iostream>
#include<limits.h>
#define nm 1000
 using namespace std;

int min(int x, int y, int z);
 
/* Returns cost of minimum cost path from (0,0) to (m, n) in mat[R][C]*/
int minCost(int cost[][n], int m, int n)
{
   if (n < 0 || m < 0)
      return INT_MAX;
   else if (m == 0 && n == 0)
      return cost[m][n];
   else
      return cost[m][n] + min( minCost(cost, m-1, n),
                               minCost(cost, m-1, n+1), 
                               minCost(cost, m-1, n-1) );
}
 
/* A utility function that returns minimum of 3 integers */
int min(int x, int y, int z)
{
   if (x > y)
      return (x > z)? x : z;
   else
      return (y > z)? y : z;
}
 
/* Driver program to test above functions */
int main()
{
   int n;
   cin>>n;
	

int array[n][n];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>array[i][j];
		}
	}

printf("%d",minCost(array,n,n)) ;  
   
   
   
   }
