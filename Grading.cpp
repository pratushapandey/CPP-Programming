#include<bits/stdc++.h>
using namespace std;

int main(){
	int marks;
	
	cout<<"Enter the marks :";
	cin >> marks;
	
	if(marks<0 || marks>100)
	cout<<"Invalid Marks";
	else if(marks >= 90 && marks <= 100)
	cout<<"Grade is A+";
	else if(marks >= 80 && marks < 90)
	cout<<"Grade is A";
	else if(marks >= 70 && marks < 80)
	cout<<"Grade is B";
	else if(marks >= 60 && marks < 70)
	cout<<"Grade is C";
	else if(marks >= 60 && marks < 50)
	cout<<"Grade is D";
	else
	cout<<"Grade is F";
	
	return 0;9696
}
