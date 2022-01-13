#include<iostream>
using namespace std;
bool prime(int x){
	for(int i=2;i<x;i++){
		if(x%i==0)
		return false;
	}
	return true;
}
int main(){
	int num;
	cout<<"Enter the number";
	cin>>num;
	cout<<prime(num);
	return 0;
}
