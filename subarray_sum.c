#include<stdio.h>
int max_sum_subarray();
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

int max=max_sum_subarray(arr,size);
printf("%d",max);

}
}
int max_sum_subarray(int arr[],int size)
{
int max=0,max1=0;
for(int i=0;i<size;i++)
{
max+=arr[i];
if(max<0)
{
max=0;
}
else if(max1<max)
{
max1=max;
}

}
return max1;
}
