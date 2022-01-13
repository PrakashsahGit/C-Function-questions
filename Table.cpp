#include<iostream>
using namespace std;
void multi(int n){
	int result;
	for(int i=1;i<=10;i++){
	cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	
}
int main(){
	int n;
cout<<"Enter the number";
cin>>n;
multi(n);
}
