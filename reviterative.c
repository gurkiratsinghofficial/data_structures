#include<stdio.h>
int main()
{
int size,j=0;
printf("enter size");
scanf("%d",&size);
int arr[size];
printf("enter array elements");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
int ar1[size];
for(int i=size-1;i>=0;i--)
{
ar1[j++]=arr[i];
}
for(int i=0;i<size;i++)
{
printf("%d",ar1[i]);
}
}
