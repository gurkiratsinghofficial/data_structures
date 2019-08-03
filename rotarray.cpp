#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4
void rotate(int arr[m][n])
{
int row=0,column=0,prev,curr,i,j;
if(row>m||column>n)
	return;
if(row+1==m||column+1==n)
	return;
prev=arr[row+1][column];
for( i=column;i<n;i++){
curr=arr[row][i];
arr[row][i]=prev;
prev=curr;
}
i--;
for( j=row+1;j<m;j++){
curr=arr[j][i];
arr[j][i]=prev;
prev=curr;
}
j--;
for(i=j-1;i>=0;i--){
curr=arr[j][i];
arr[j][i]=prev;
prev=curr;
}
i++;
for(j=j-1;j>0;j--){
curr=arr[j][i];
arr[j][i]=prev;
prev=curr;
}


for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<arr[i][j];
}
cout<<endl;
}


}

int main()
{
int arr[m][n];
int count=1;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
arr[i][j]=count++;
}
}

rotate(arr);
}
