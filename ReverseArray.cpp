#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
	int start = 0, end = n-1;
	while(start <= end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[],int n){
	int i = 0; 
	for(i = 0; i < n; i++)
	cout<<arr[i]<<" ";
}

int main(){
	
	int n;
	cin >> n;
	
	int arr[n],i;
	
	cout<<"Array Elements:"<<endl;
	for(i = 0; i < n; i++)
	cin>>arr[i];
	cout<<endl;
	
	reverseArray(arr,n);
	printArray(arr,n);
}
