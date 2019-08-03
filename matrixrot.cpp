#include<iostream>
#include<string>
using namespace std;
int main(int argc,char argv[])
{
int arr[3][3];
int *ptr;
ptr=arr;
for(int i=0;i<3;i++)
cout<<*(ptr+i);
}
