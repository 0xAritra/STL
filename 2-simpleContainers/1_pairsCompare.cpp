#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int, int> p1(5, 7), p2;
    p2 = make_pair(5, 10);
    cout << (p1 == p2) << " " << (p1 != p2) << " " << (p1 < p2) << " " << (p1 > p2) << endl;
}