#include<iostream>
using namespace std;
int mult(int a,int b){
	return a*b;
}
int main(){
	int a,b;
	cout<<"Enter the two number";
	cin>>a>>b;
	cout<<a<<"*"<<b<<"="<<mult(a,b);
	return 0;
}
