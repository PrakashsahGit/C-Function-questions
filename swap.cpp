#include<iostream>
using namespace std;
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x=6,y=9;
	swap(x,y);
	cout<<x<<" "<<y;	
}
