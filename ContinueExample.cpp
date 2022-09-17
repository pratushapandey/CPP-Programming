/*Write a program to print all numbers between two intervals, namely low and high. 
But, with a special condition that numbers divisible by 5 must not be printed and 
skipped. (Do this using continue Statement)

Sample Input

1 10

Sample Output

1 2 3 4 6 7 8 9*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int low;
	int high;
	int i;
	
	cout<<"Enter the low value : "; cin>>low;
	cout<<"Enter the high value : "; cin>>high;
	
	cout<<"The range is : "<<endl;
	for(i = low; i <= high; i++){
		
		if(i % 5 == 0)
		continue;
		
		cout <<i <<" ";
		
	}
	return 0;
}
