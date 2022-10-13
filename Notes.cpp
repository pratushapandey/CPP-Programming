#include<iostream>
using namespace std;

int main(){
	int amount;
	cout<<"Enter the amount :"<<endl; cin >> amount;
	
	int num,x;
	cout<<"1.Rs 100 notes"<<endl;
	cout<<"2.Rs 50 notes"<<endl;
	cout<<"3.Rs 20 notes"<<endl;
	cout<<"4.Rs 1 notes"<<endl;
	cout<<"Choose the option"<<endl;
	cin >> num;
	
	switch(num){
		
		case 1: 
		    x = amount/100;
		    amount %= 100;
		    cout<<"No of 100Rs note is: "<<x <<endl;
		    break;
		    
		case 2:
			x = amount/50;
			amount %= 50;
			cout<<"No of 50Rs note is: "<<x <<endl;
			break;
			
		case 3:
			x = amount/20;
			amount %= 20;
			cout<<"No of 20Rs note is: "<<x <<endl;
			break;
			
		case 4:
			x = amount/1;
			amount %= 1;
			cout<<"No of 1Rs note is: "<<x <<endl;
			break;
			
		default:
			cout<<"Enter the correct operator"<<endl;
	}
}
