#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int k){
	
	int low = 0;
	int high = n-1;
	
	while(low <= high){
		
		int mid = (low + high)/2;
		
		if(arr[mid] == k)
			return mid;
		
		
		if(k > arr[mid])
			low = mid + 1;
		
		else
		    high = mid - 1;
	}
	return -1;
}

int main(){
	
	int n; 
	cout <<"Enter the size of the array:"<<endl; cin>>n;
	
	int arr[n],i,key;
	
	cout<<"Enter the elements of the array:"<<endl;
	for(i = 0; i < n; i++){
		cin >> arr[i];
    }
    
    cout<<"Enter the key element: "<<endl; cin>>key;
    
    int x = binarySearch(arr,n,key);
    cout<<"The position of key is: "<<x;
    
    return 0;
}
