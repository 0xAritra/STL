#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[] = {10, 5, 15};
    vector<int> v(arr, arr+3);

    for (auto it = v.rbegin(); it!=v.rend(); it++)
    {
        cout << *it << " ";
    }
}