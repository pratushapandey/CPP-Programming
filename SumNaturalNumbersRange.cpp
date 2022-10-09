#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b, sum=0;
	cin>>a>>b;  //The range of natural number to be printed
	
	sum = b*(b+1)/2 - a*(a+1)/2+a;
	cout<<sum;
	
	return 0;
}
