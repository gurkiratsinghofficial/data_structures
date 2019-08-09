#include<iostream>
using namespace std;
void sortit(int arr[],int n){
int min,temp;

for(int i=0;i<n-1;i++){
min=i;

	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[min])
		min=j;
        }
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
}



for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}


int main(){
	int arr[]={4,3,2,6,9,11,33};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
	}
	cout<<endl;

	sortit(arr,n);

}
