#include<iostream>
using namespace std;

int fibonacci(int num){
    if(num == 0 || num == 1)
    return num;
    
    else
    return (fibonacci(num-1)+fibonacci(num-2));
}
int main(){
	
	int num;
	cin>>num;
	
	if(num < 0)
	cout <<"Wrong number";
	
	else{
		int result = fibonacci(num);
	    cout<<result<<endl;
	}
	
	
	return 0;
}
