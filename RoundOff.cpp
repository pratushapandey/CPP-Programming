#include<bits/stdc++.h>
using namespace std;

// if value = 9.862 the floor will be 9 and ceil will be 10 and round off will be 10

int main(){
	float val1;
	
	cout<<"Enter the value: ";
	cin >> val1;
	
	cout<<fixed<<setprecision(6);
	cout<<"Floor is :" <<floor(val1) <<endl;
	cout<<"Ceil is :" <<ceil(val1) <<endl;
	cout<<"Round is :"<<round(val1) <<endl;
	
	
	return 0;
}
