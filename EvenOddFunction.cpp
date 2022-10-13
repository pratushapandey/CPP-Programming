#include<iostream>
using namespace std;

bool isEven(int n){
	if (n % 2 == 0)
	return true;
	
	else
	return false;
}

int main(){
	int num;
	
	cin>>num;
	
	if(isEven(num))
	cout<<"Number is even"<<endl;
	
	else
	cout<<"Number is odd"<<endl;
	
	return 0;
}
