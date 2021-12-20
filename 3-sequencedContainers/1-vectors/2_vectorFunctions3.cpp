// clear/ empty
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{5, 34, 78, 9};
    v.clear();
    cout << v.size() << " ";
    if(v.empty())
        cout << "Empty!";
    else
        cout << "Not Empty";
}