#include<stdio.h>
int  findlcm(int a1,int a2)
{
     int lcm;
    int min;
    if(a1>a2)
    {
      min=a2;
    }
    else{
    min=a1;}
    for(int i=1;i<=min;i++)
    {
        if(a1%i==0&&a2%i==0)
        {
            lcm=i;
        }
        else{};
    }
int b=a1*a2;
return b/lcm;
}
int countlcm(int arr[],int s)
{
int result=arr[0];
for(int i=1;i<s;i++)
{
result=findlcm(arr[i],result);
}
return result;
}



int main()
{
int size;
printf("enter size");
scanf("%d",&size);
printf("enter elements");
int arr[size];
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
int lccm=countlcm(arr,size);
printf("%d",lccm);
}
