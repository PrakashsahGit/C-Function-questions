#include<iostream>
using namespace std;
float area(float r){
	float a,c;
	a=3.14f*r*r;
	return a;
	
}
float circumfrance(int r){
	float c;
	c=2*3.14f*r;
	return c;
	
}

int main(){
	float radius,result,p;
	cout<<"Enter the radius of circle";
	cin>>radius;
	result=area(radius);
	p=circumfrance(radius);
	cout<<"Area of circle"<<" "<<result<<endl;
	cout<<"Circumfrance of circle"<<" "<<p;
	return 0;
	
	
}
