#include<iostream>
using namespace std;
int digit(int n){
	int sum=0;
	for(int i=0;i<=n;i++)
	sum=sum+i;
	return sum;
}
int main(){
	int n;
	cout<<"Enter the number";
	cin>>n;
	int result;
	result=digit(n);
	cout<<result;
}
