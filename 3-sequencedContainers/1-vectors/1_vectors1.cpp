#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{10, 5, 15};
    for(int &x:v)
    {
        cout << x << " ";
    }
}