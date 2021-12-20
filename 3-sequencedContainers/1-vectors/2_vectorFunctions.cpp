// pop_back()/front()/back()
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{10, 5, 20, 15};
    cout << v.front() << endl;
    v.back()=30;
    for(int x:v)
        cout << x << " ";
}