#include<stdio.h>
void rotate();
void print();
int main()
{
int arr[5]={1,2,3,4,5};
int rot=2;
for(int i=0;i<rot;i++)
{
rotate(arr,rot);
}
print(arr);
}


void rotate(int arr[])
{
  int temp;
temp=arr[5-1];
for(int i=5-1;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=temp;
}


void print(int arr[])
{
for(int i=0;i<5;i++)
{
printf("%d",arr[i]);
}
}
