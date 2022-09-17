#include<bits/stdc++.h>
using namespace std;

double squareRoot(double number){
	double result = sqrt(number);
	return result;
}

double cubeRoot(double number){
	double result = cbrt(number);
	return result;
}

int main(){
	double num;
	cout <<"Enter the number :";
	cin >> num;
	
	cout<<"Square Root of number is : "<<squareRoot(num)<<endl;
	cout<<"Cube Root of number is : "<<cubeRoot(num)<<endl;
}
