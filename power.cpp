#include<iostream>
using namespace std;
int power(int a,int b )
{
	int pow=1;
	for(int i=0;i<b;i++)
	pow*=a;
	return pow;
	
}
int main(){
	int a,b,r;
	cout<<"Enter the base";
	cin>>a;
	cout<<"Enter the power";
	cin>>b;
	r=power(a,b);
	cout<<"Base"<<a<<"Power"<<b<<" "<<r;
	
	
}

