#include<iostream>
using namespace std;
int search(int a[],int n,int key){
	for(int i=0;i<n;i++)
	if(key==a[i])
	return i;
	
}
int main(){
	int a[]={3,4,5,6,7};
	int n=5,key=5;
	int r=search(a,n,key);
	cout<<r;
}
