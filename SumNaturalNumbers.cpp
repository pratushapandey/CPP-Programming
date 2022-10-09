#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum = 0, i ,n;
	cin>>n; //The range upto natural number to be printed
	
	for(i = 1; i <= n; i++){
		sum += i;
	}
	cout<<sum;
	
	return 0;
}
