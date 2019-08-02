#include<iostream>
#include<string>
using namespace std;
void palin(string s1)
{
int a=s1.length();
char s2[a];
int j=0;
for(int i=a-1;i>=0;i--)
{
s2[j]=s1[i];
j++;
}

s2[j]='\0';
if(s1==s2)
{
cout<<"string is palindrome";
}
else
cout<<"not a palindrome";


}
int main(int argc,const char* argv[])
{
	string str1=argv[1];
palin(str1);
return 0;
}
