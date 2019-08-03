#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int i;
char str[30];
gets(str);
for(i=0;str[i]!='\0';++i)
cout<<"length is"<<i;
return 0;

}

