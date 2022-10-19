#include<iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key){
	
	int low = 0, high = n-1;
	int ans = -1;
	
	while(low <= high){
		
		int mid = low +(high - low)/2;
		
		if(arr[mid] == key){
			ans = mid;
			high = mid -1;
		}
		
		else if(key > arr[mid]){
			low = mid +1;
		}
		
		else{
			high = mid - 1;
		}
	}
	return ans;
}

int lastOccurance(int arr[], int n, int key){
	
	int low = 0, high = n-1;
	int ans = -1;
	
	while(low <= high){
		
		int mid = low +(high - low)/2;
		
		if(arr[mid] == key){
			ans = mid;
			low = mid +1;
		}
		
		else if(key > arr[mid]){
			low = mid +1;
		}
		
		else{
			high = mid - 1;
		}
	}
	return ans;
}

int main(){
	
	int arr[5] = {1,2,3,3,5};
	
	cout<<"First Occurance and Last Occurance of 3 : "<<firstOccurance(arr,5,3)<<" "<<lastOccurance(arr,5,3);
	return 0;
}
