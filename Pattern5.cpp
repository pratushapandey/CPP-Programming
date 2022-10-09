#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	int toPrint = 1;
	while(i <= n){
		int j = 1;
		while(j <= n){
			cout<< toPrint <<" " ;
			toPrint++;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
