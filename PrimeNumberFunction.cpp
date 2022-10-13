#include<iostream>
using namespace std;

bool primeNumber(int n,int i){
	if(i == 1)
	return 1;
	
	else{
		if(n % i == 0)
		return 0;
		
		else
		return primeNumber(n,i-1);
	}
}

int main(){
	
	int num;
	cin>>num;
	
	int res = primeNumber(num,num/2);
	if(res == 1)
	cout<<"Prime Number"<<endl;
	else
	cout<<"Not Prime Number"<<endl;
	
	return 0;
}
