#include<bits/stdc++.h>
using namespace std;

int Addition(int a, int b){
	int c = a+b;
	return c;
}
int Subtraction(int a, int b){
	int c = a - b;
	return c;
}
int Multiply(int a, int b){
	int c = a * b;
	return c;
}
int Divide(int a, int b){
	int c = a / b;
	return c;
}
int Modulus(int a, int b){
	int c = a % b;
	return c;
}
int Power(int a, int b){
	int c = pow(a,b);
	return c;
}

int main(){
	int num1,num2;
	cout<<"Enter the two numbers : ";
	cin >> num1 >> num2;
	
	cout<<"Addition : " << Addition(num1,num2) <<endl;
	cout<<"Subtraction : " << Subtraction(num1,num2) <<endl;
	cout<<"Multiplication : " << Multiply(num1,num2) <<endl;
	cout<<"Division : " << Divide(num1,num2) <<endl;
	cout<<"Modulus : " << Modulus(num1,num2) <<endl;
	cout<<"Power : " << Power(num1,num2) <<endl;
	
	return 0;
}
