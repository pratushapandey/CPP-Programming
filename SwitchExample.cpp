/*Write a program to create an interface of an MCQ, ask the user for the option of 
his choice as an integer and print the option that he has selected. Options are marked 
from 1 to 4 any other integer input should be printed as invalid

Input :
2

Output
Option 2 Selected

Input
5

Output
Invalid */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int choice;
	cout<<"The options are:"<<endl;;
	cout<<"1."<<endl;
	cout<<"2."<<endl;;
	cout<<"3."<<endl;;
	cout<<"4."<<endl;;
	cout<<"Enter the choice : "; cin >> choice;
	
	switch(choice){
		case 1:
			cout<<"Option 1 selected.";
			break;
			
		case 2:
			cout<<"Option 2 selected.";
			break;
		
		case 3:
			cout<<"Option 3 selected.";
			break;
		
		case 4:
			cout<<"Option 4 selected.";
			break;
		
		default:
			cout<<"Wrong Option selected";
	}
	return 0;
}
