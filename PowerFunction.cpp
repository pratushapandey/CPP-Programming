#include<iostream>
#include<math.h>
using namespace std;

int power(int a,int b){
	
	int answer = pow(a,b);
	return answer;
}

int main(){
	
	int num, exponent;
	cin >> num>>exponent;
	
	int ans = power(num,exponent);
	
	cout<<ans<<endl;
	
	return 0;
}
