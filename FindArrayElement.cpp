#include<iostream>
using namespace std;

void findArrayElement(int arr[],int n){ 
	int i;
	int temp[n+1]; //6
	for(i = 0; i < n; i++)
		temp[i] = 0; //temp[0],[1],[2],[3],[4],[5],[6] = 0
	
	for(i = 0; i < n; i++)
	    temp[arr[i] - 1] = 1; //temp[0]=1, temp[2]=1, temp[3]=1, temp[4]=1, temp[5]=1
	
	int ans;
	for(i = 0; i < n; i++){
		if(temp[i] == 0)      //temp[1]=0
		ans = i+1;            // 1+1 = 2
	}
	cout<<ans;
}

int main(){
	
	int arr[] = {1,3,4,5,6};
	int n = sizeof(arr)/sizeof(int); //5
	
	findArrayElement(arr,n);
	
	return 0;
}
