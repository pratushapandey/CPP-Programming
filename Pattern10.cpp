#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i = 1;
	while(i <= n){ // 1 < 4 , 2 < 4 , 3 < 4 , 4 <= 4
		int j = i; // j = 1 , 2 , 3 , 4
		while(j < i*2){  // 1 < 2 , 2 < 4 , 3 < 6 , 4 < 8
			cout<<j<<" "; // j = 1 , j= 2,3 , j= 3,4,5 , j= 4,5,6,7
			j++; // 2 , 3 , 4
		}
		cout<<endl;
		i++; // 2 , 3 , 4
	}
	return 0;
}
