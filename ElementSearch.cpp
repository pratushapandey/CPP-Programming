#include<iostream>
using namespace std;

int search(int arr[],int size,int element){
	int i;
	
	for(i = 0; i < size; i++){
		if(arr[i]==element)
		return i;
		
		else
		i++;
	}
	return -1;
}
int main(){
	
	int n;
	cout<<"Array Size: "<<endl; cin>>n;
	cout<<endl;
	
	int arr[n],i;
	cout<<"Array Elements:"<<endl;
	for(i = 0; i < n; i++)
	cin>>arr[i];
	cout<<endl;
	
	int element;
	cout<<"Element to be searched: "<<endl; cin>>element;
	
	int pos = search(arr,n,element);
	cout<<"Element found at: "<<pos<<endl;
	
	return 0;
}
