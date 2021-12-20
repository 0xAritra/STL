#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int, int> p1;
    pair<int, string> p2(5, "Aritra");
    pair<int, int> p3;
    p3={8, 2};

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
}