#include<iostream>
#include<math.h>
using namespace std;

int maxGet(int arr[], int size){
	int i,j,MAX;
	for(i = 0; i < size-1; i++){
		for(j = i+1; j <size; j++){
			MAX = max(arr[i],arr[j]);
		}
	}
	return MAX;
}

int minGet(int arr[], int size){
	int i,j,MIN;
	for(i = 0; i < size-1; i++){
		for(j = i+1; j <size; j++){
			MIN = min(arr[i],arr[j]);
		}
	}
	return MIN;
}

int main(){
	int n,i;
	cout<<"Size of array: "<<endl; cin>>n;
	
	int arr[n];
	cout<<"Enter the array element:"<<endl;
	for(i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout<<endl;
	cout<<maxGet(arr,n)<<" "<<minGet(arr,n);
}
