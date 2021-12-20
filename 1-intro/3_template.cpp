#include<iostream>
using namespace std;

template<typename T>
// template<class T>
void Swap(T& x, T& y)
{
    T temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a=5, b=7;
    char c='c',d='d';
    Swap<int>(a,b);
    cout << a << " - " << b << endl;
    Swap(c,d);
    cout << c << " - " << d;
}