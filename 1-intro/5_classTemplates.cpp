#include<iostream>
using namespace std;

template<typename T>
class Pair
{
    private:
        T x, y;
    public:
        Pair(T a, T b) {x=a; y=b;}
        T getFirst();
        T getSecond() {return y;}
};

template<typename T>
T Pair<T>::getFirst()
{
    return x;
}

int main()
{
    Pair<int> p(5, 7);
    cout << p.getFirst() << " " << p.getSecond();
}