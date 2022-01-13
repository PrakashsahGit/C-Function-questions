#include<iostream>
using namespace std;
void grades(int marks){
	if(marks>=91 && marks<100)
	cout<<"AA";
else if(marks>=81 && marks<90)
	cout<<"AB";
	else if(marks>=71 && marks<80)
		cout<<"BB";
		else if(marks>=61 && marks<70)
		cout<<"BC";
		else if(marks>=51 && marks<60)
		cout<<"CD";
		else if(marks>41 && marks<50)
		cout<<"DD";
		else if(marks<=40)
		cout<<"Fail";
	}
int main(){
	int marks;
	cout<<"Enter the marks";
	cin>>marks;
	grades(marks);
}
