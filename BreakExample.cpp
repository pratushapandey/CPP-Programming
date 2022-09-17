/*Problem Statement
Write a program to print all numbers between two intervals, namely low and high. 
But, with a special condition that if any number in the range while getting printed 
becomes divisible by 13 then you must not print anything further and stop. (Do this 
using the Break Statement)  Example -

Input -
1 10

Output 
1 2 3 4 5 6 7 8 9 10*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int low;
	int high;
	int i;
	
	cout<<"Enter the lower number : "; cin>>low;
	cout<<"Enter the higher number : "; cin>>high;
	
	cout<<"The range is : "<<endl;
	for(i = low; i <= high; i++){
		cout<<i<<"\t";
		
		if(i % 13 == 0)
		break;
	}
	return 0;
}
