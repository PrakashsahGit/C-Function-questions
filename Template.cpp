#include <iostream>
using namespace std;
template<class T>
T maxim(T a,T b)
{
if(a>b)
return a;
else
return b;
}
int main()
{
int x=9,y=8,r;
r=max(x,y);
cout<<r<<endl;
cout<<max(4.4f,6.4f);
return 0;
}
