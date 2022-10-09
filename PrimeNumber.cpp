#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number : "<<endl; cin >> n;
	
	int i = 2;
	while(i < n){
		if(n % i == 0){
			cout<<"Not Prime Number";
			return 0;
		}
		i++;
	}
	cout <<"Prime Number";
	return 0;
}
