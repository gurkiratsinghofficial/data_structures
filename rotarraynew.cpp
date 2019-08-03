#include<bits/stdc++.h>
using namespace std;
#define M 5
#define N 5
void rotate(int row,int column,int arr[M][N],int m,int n)
{

int prev=0,curr=0,i,j;
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
curr=arr[j][n-1];
arr[j][n-1]=prev;
prev=curr;
}
for(i=n-2;i>=column;i--){
curr=arr[n-1][i];
arr[n-1][i]=prev;
prev=curr;
}
for(j=m-2;j>=row+1;j--){
curr=arr[j][column];
arr[j][column]=prev;
prev=curr;
}
row++;
column++;
--m;
--n;
rotate(row,column,arr,m,n);

}

int main()
{
int arr[M][N]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
int m=M;
int n=N;

rotate(0,0,arr,m,n);
for(int i=0;i<N;i++)
{
for(int j=0;j<M;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}

}

