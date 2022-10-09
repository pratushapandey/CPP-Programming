#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i ;
	cout<<"Enter the range of natural number to print: " <<endl; cin >> n;
	
	cout<<"The range of natural numbers are : "<<endl;
	for(i = 1; i <= n; i++){
		cout << i << endl;
	}
	
	cout<<"The reverse of range of natural numbers are : "<<endl;
	for(i = n; i > 0; i--){
		cout<<i<<endl;
	}
	
	return 0;
}
