#include<iostream>
using namespace std;
int add(int x,int y=0,int z=0){
	int r=x+y+z;
	return r;
}
int main(){
	cout<<add(2)<<endl;
	cout<<add(2,3,5)<<endl;
	cout<<add(2,3)<<endl;

}
