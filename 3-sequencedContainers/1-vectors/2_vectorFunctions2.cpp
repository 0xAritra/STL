// erase
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{10, 12, 18, 9, 5};
    v.erase(v.begin());
    for(int x:v)
        cout << x << " ";
    cout << endl;
    v.erase(v.begin(), v.end()-2);
    for(int x:v)
        cout << x << " ";
}