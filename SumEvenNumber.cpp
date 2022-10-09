#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the number upto which you want the sum :"<< endl; cin >> n;
	
	int i = 2;
	int sum = 0;
	while(i <= n){
		if(i % 2 == 0){
			sum += i;
			cout<<"Numbers are:\n"<<i<<"\n";
		}
		i++;
	}
	cout << "Sum is :" <<sum;
	return 0;
}
