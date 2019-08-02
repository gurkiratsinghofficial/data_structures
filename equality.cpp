#include<iostream>
#include<string>
using namespace std;
void equal(string s1,string s2)
{
int a=s1.length();
int b=s2.length();
int c=0;
if(a==b)
{
for(int i=0;i<a;i++)
{
if(s1.at(i)==s2.at(i))
c++;
}
}
if(c==a)
cout<<"strings are equal";
else
cout<<"not equal";
}
int main(int arg,char *argv[])
{
	string str1=argv[1];
        string str2=argv[2];
equal(str1,str2);
}
