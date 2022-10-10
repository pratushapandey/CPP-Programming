#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n; //3
	int i = 1;
	while(i <= n){ // 1 <= 3 , 2 <= 3
		int j = 1;
		while(j <= i){   // 1 <= 1 , 1,2 <= 2
			cout<<(i - j + 1)<<" "; // 1 , 2-1
			j++; //2
		}
		cout<<endl;
		i++; // 2
	}
	return 0;
}
