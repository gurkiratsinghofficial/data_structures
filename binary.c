#include<stdio.h>
void searche();
int main()
{
int size,n;
printf("enter size of array");
scanf("%d",&size);
int arr[size];
printf("enter array");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter element to be searched");
scanf("%d",&n);
searche(arr,size,n);
}


void searche(int arr[],int size,int n)
{
int first=0;
int last=size;
int middle=(first+last)/2;
while(first<=last)
{
if(arr[middle]==n)
{
   printf("element found at index %d",middle+1);
    break;
}
else if(arr[middle]<n)
{
    first=middle+1;
}
else if(arr[middle]>n)
{
   last=middle-1;
}
middle=(first+last)/2;

}
if(first>last)
{
printf("element not found");
}

}
