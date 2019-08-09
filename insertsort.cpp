#include<iostream>
using namespace std;
void insert(int n,int arr[])
{
int key,j;
for(int i=1;i<n;i++)
{
	key=arr[i];
	j=i-1;
	while(j>=0 && arr[j] > key)
	{
		arr[j+1]=arr[j];
		j=j-1;
	}
arr[j+1]=key;
}

for(int i=0;i<n;i++)
cout<<arr[i];
}
int main(){
	int arr[]={4,2,6,7,1,9,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	cout<<arr[i];
	cout<<endl;
	insert(n,arr);
}
