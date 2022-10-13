#include<iostream>
using namespace std;

int main(){
	int a,b;
	
	cout<<"Enter the two values:"<<endl; cin>>a>>b;
	
	char op;
	cout<<"Enter the operator: "<<endl; cin>>op;
	
	switch(op){
		case '+':
			cout<< a+b <<endl;
			break;
		case '-':
			cout<< a-b <<endl;
			break;
		case '*':
			cout<< a*b <<endl;
			break;
		case '/':
			cout<< a/b <<endl;
			break;
		case '%':
			cout<< a%b <<endl;
			break;
	}
}
