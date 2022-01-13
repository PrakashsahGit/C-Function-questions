#include<iostream>
using namespace std;
int max(int n1,int n2,int n3){
	if(n1>n2 && n1>n3)
	return n1;
	else if(n2>n3 && n2>n1)
	return n2;
	else if(n3>n1 && n3>n2)
	return n3;
}
int min(int n1,int n2,int n3){
	if(n1<n2 && n1<n3)
	return n1;
	else if(n2<n3 && n2<n1)
	return n2;
	else if(n3<n1 && n3<n2)
	return n3;
}
int main(){
	int n1,n2,n3;
	cout<<"Enter the three numbers";
	cin>>n1>>n2>>n3;
	cout<<"The max number is"<<" "<<max(n1,n2,n3)<<endl;
	cout<<"The min number is"<<" "<<min(n1,n2,n3);
}
