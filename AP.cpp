#include<bits/stdc++.h>
using namespace std;

int aP(int a1,int n,int d){
	if(n >= 1)
	return (a1 + (n-1)*d);
	
	else
	return 1;
}

int main()
{
	int a1, n, d;
	cin>>a1>>n>>d;
	
	cout<< aP(a1,n,d)<<endl;
	
	return 0;
}
