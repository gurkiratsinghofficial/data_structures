#include<stdio.h>
int pivot();
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
int num;printf("enter number to be searched");scanf("%d",&num);

int p=pivot(arr,size);

int index1=binary_search(arr,0,p,num);
if(index1==-1)
{
int index2=binary_search(arr,p+1,size-p);
printf("found at %d",index2);
}
else
printf("found at %d",index1);
}


int pivot(int arr[],int size)
{
for(int i=0;i<size;i++)
{
if(arr[i+1]<arr[i])
{
return i;
break;
}
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
