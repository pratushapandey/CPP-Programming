#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<endl;
	
	int arr[n],i;
	
	for(i = 0; i < n; i++)
	cin>>arr[i];
	
	int sum = 0;
	for(i = 0; i < n; i++)
	sum += arr[i];
	
	cout<<endl;
	cout<<sum;
}
