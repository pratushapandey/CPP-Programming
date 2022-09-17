#include<bits/stdc++.h>
using namespace std;

int main(){
	int num1;
	int num2;
	int largest;
	
	cout<<"Enter the two numbers :";
	cin >> num1 >> num2;
	
	if(num1 == num2)
	cout<<"Both are equal";
	
	else{
		largest = num1 > num2 ? num1 : num2;
		cout<<largest<< " is maximum";
	}
	
	return 0;
}
