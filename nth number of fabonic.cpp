#include<iostream>
using namespace std;

int fib(int x)
{
    if(x == 0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return fib(x-1)+fib(x-2);
    }
}

int main()
{
    cout << fib(0) << "\n";
    cout << fib(1) << "\n";
    cout << fib(2) << "\n";
    cout << fib(3) << "\n";
    cout << fib(4) << "\n";
    cout << fib(5) << "\n";
    return 0;
}	
