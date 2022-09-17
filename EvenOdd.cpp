//Even Odd Using Bitwise Operator

#include<bits/stdc++.h>
using namespace std;

//Returns true if even
int isEven(int n){
	//n & 1 is 1 then odd, else even
	return(!(n & 1));
}
int main(){
	int num;
	cout<<"Enter the number :";
	cin >> num;
	
	isEven(num) ? cout<<"Even" : cout<<"Odd";
	return 0;
}
