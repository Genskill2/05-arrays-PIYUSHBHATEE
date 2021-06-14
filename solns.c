/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
#include<math.h>
#include<limits.h>

int mode(int [], int);
int factors(int, int []);
float average(int [], int);
int max(int [], int);
int min(int [], int);

  int factors(int x,int ret[])
  {
  int i=0;int count=0;
  while(x%2==0)
     {
      ret[i++]=2;
      count++;
      x=x/2;
     }
     for(int j=3;j<=sqrt(x);j=j+2)
     {
        while(x%j==0)
           {
           ret[i++]=j;
           count++;
           x=x/j;
           }
     }
     ret[i]=x;
     return count+1;
  }
  float average(int avg[],int size)
  {
  float sum=0;
  for(int i=0;i<size;i++)
  sum+=avg[i];
  return sum/size;
  
  }
  int max(int arr[],int x)
{
 
int max=arr[0];
  for(int i=1;i<x;i++)
  {
  if(max<arr[i])
    max=arr[i];
  }
 return max;
}
int min(int arr[],int x)
{
int min=arr[0];
  for(int i=1;i<x;i++)
  {
  if(min>arr[i])
    min=arr[i];
  }
 return min;
 }
  int mode(int arr[],int size)
  {
  if(size==1)
  return arr[0];
  int max=INT_MIN;int mode;
  for(int i=0;i<size-1;i++)
     {
     int cur=0;
        for(int j=i;j<size;j++)
        {
        if(arr[i]==arr[j])
            cur++;
            }
     
     if(cur>max)
     {
     max=cur;
     mode=arr[i];
     }
     }return mode;
  }
