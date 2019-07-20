#include <stdio.h>
void rotate();
int main()
{
printf("enter size");
int x;
scanf("%d",&x);
 int arr[x];
int n;
printf("enter 5 elements in array");
for(int i=0;i<x;i++)
{
scanf("%d",&arr[i]);
}
printf("enter no. of rotations");
scanf("%d",&n);
rotate(arr,x,n);
}



void rotate(int arr[],int x,int n)
{
int temp[n];
int g=n;
for(int i=0;i<g;i++)
{
  temp[i]=arr[x-n];
  n--;
}
for(int i=(x-g-1);i>=0;i--)
{
arr[i+g]=arr[i];
}
for(int i=0;i<g;i++)
{
arr[i]=temp[i];
}
for(int i=0;i<x;i++)
{
printf("%d",arr[i]);
}
}

