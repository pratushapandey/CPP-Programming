#include<iostream>
using namespace std;

int bits(int a){
	int count = 0;
	
	while(a)
	{
		count += a & 1;
		a= a >> 1;
	}
	return count;
}

int main(){
	int a;
	
	cin >> a;
	cout<<bits(a)<<endl;
	
	return 0;
}
