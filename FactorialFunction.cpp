#include<iostream>
using namespace std;

int factorial(int n){
	
	if(n==0)
	return 1;
	
	else
	return n * factorial(n-1);
}

int nCr(int n,int r){
	
	int fact = factorial(n);
	int deno = factorial(r) * factorial(n-r);
	
	return fact/deno;
}

int main(){
	
	int num,den;
	cin>>num>>den;
	
	int fact = nCr(num,den);
	cout<<fact<<endl;
	
	return 0;
}
