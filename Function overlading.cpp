#include<iostream>
using namespace std;
int add(int x,int y){
	return x+y;
}
int add(int x,int y,int z){
	return x+y+z;
}
float add(float x, float y){
	return x+y;
}
int main(){
	int x=9,y=6,z,h;
	z=add(x,y);
	h=add(x,y,z);
	float v=2.7f;
	float w=3.6f;
	float q;
	q=add(v,w);
	cout<<q<<endl;
	cout<<h<<endl;
	
	cout<<z;
}
