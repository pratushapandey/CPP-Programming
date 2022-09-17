#include<bits/stdc++.h>
using namespace std;

int main(){
	double number;
	double exponent;
	double result = 1;
	int i;
	
	cout<<"Enter the base number :"; cin >> number;
	cout<<"Enter the exponent :"; cin >> exponent;
	
	for(i = 1; i <= exponent; i++)
	result *= number;
	
	cout<<"Power of number :" <<result;
	
	return 0;
}
