#include<stdio.h>

 int main()
  {
   int i,count=0,ew;
   char ch[20];
   
   printf("Enter any string: ");
   scanf("%s",ch);
   for(i=0;ch[i]!='\0';i++)
   {
   count++;
   }
   printf("%d",count);
  
  }
