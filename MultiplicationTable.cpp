#include<bits/stdc++.h>
using namespace std;

void table(int n){
	int i;
	cout<<"The table of " <<i <<" is :"<<endl;
	for(i = 1; i <= 10; i++){
		cout << n << "X" << i <<"=" <<n * i<<endl;
	}
}
int main(){
	int number;
	cout<<"Enter the number for which you want to print the table :";
	cin>>number;
	
	table(number);
	
	return 0;
}
