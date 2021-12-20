#include<iostream>
#include<vector>
using namespace std;

vector<int> fun(vector<int> &v)
{
    v.push_back(40);
    v.push_back(50);
    return v;
}

int main()
{
    vector<int> v{10, 20, 30}, v1;
    v1 = fun(v);
    for(const int &x: v)
        cout << x << " ";
}