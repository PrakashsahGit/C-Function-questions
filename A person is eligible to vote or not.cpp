#include<iostream>
using namespace std;
void vote(int age){
	if(age>=18)
	cout<<"She can vote";
	else
	cout<<"She can't vote";
	
}
int main(){
	int age;
	cout<<"Enter the age";
	cin>>age;
	vote(age);
}
