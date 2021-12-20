// insert
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{10, 5, 20, 15}, v1;
    auto it=v.insert(v.begin(), 4);
    v.insert(v.begin()+2, 7);
    v.insert(v.begin(), 2, 17);
    v1.insert(v1.begin(), v.begin(), v.begin()+3);
    for(int x:v)
        cout<<x<<" ";
    cout << endl;
    for(int x:v1)
        cout<<x<<" ";
}