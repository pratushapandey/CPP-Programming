#include<bits/stdc++.h>
using namespace std;

int main(){
	int num1;
	int num2;
	int num3;
	
	cout<<"Enter the three numbers : ";
	cin >> num1 >> num2 >> num3;
	
	int result = max(num1, max(num2,num3));
	cout<<"Maximum number is : "<<result;
	
	return 0;
}
