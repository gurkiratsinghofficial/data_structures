#include<stdio.h>
void revrec();
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    revrec(arr,size);
   for(int i=0;i<size;i++)
   {
       printf("%d",arr[i]);
   }
   return 0; 
}
void revrec(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

