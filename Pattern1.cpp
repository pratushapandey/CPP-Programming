#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of rows and columns(rows==column) : " <<endl; cin>>n;
	int i = 0;
	
	while(i < n){ //0,1,3,.....,n-1 (rows)
		int j = 0;
		while (j < n){ //0,1,2,3,...,n-1(columns)
			cout<<"*  ";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
