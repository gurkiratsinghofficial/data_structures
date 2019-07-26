#include<stdio.h>
int binary_search();
int main()
{
int size;
printf("enter size");
scanf("%d",&size);
int arr[size];
printf("enter elements");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
int num;
printf("enter num to be searched");
scanf("%d",&num);
int low=arr[0];
int high=arr[size-1];
int result=binary_search(arr,low,high,num);
if(result==-1)
{
printf("not found");
}
else
{
printf("found at %d",result);
}
}

int binary_search(int arr[],int low,int high,int num)
{
  if(low>high)
       return -1;
int mid=low+(high-low)/2;
if(arr[mid]==num)
       return mid;
if(num>arr[mid])
       return  binary_search(arr,mid+1,high,num);
return binary_search(arr,low,mid-1,num);
}


