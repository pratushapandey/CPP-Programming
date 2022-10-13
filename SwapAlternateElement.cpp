#include<iostream>
using namespace std;

void swapElements(int arr[],int n){
	int i = 1,temp;
	while(i <= n){
		swap(arr[i],arr[i-1]);
		i += 2;
	}
}

void printArray(int arr[],int n){
	int i = 0; 
	for(i = 0; i < n; i++)
	cout<<arr[i]<<" ";
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n],i;
	for(i = 0; i < n; i++)
	cin>>arr[i];
	
	swapElements(arr,n);
	printArray(arr,n);
}
