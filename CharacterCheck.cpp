#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter the character :"<<endl; cin >> ch;
	
	if(ch >= 'a' && ch < 'z'){
		cout<<"Character is lowercase";
	}
	else if(ch >= 'A' && ch <= 'Z'){
		cout <<"Character is uppercase";
	}
	else if(ch >= '0' && ch <= '9'){
		cout<<"Character is digit";
	}
	return 0;
}
