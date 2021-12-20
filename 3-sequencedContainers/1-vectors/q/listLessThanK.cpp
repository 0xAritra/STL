#include<iostream>
#include<vector>
using namespace std;

vector<int> fun(int arr[], int n, int K)
{
    vector<int> v;
    for(int i=0; i<n; i++)
        if(arr[i]<K)
            v.push_back(arr[i]);
    return v;
}

int main()
{
    vector<int> v;
    int arr[]={17, 10, 20, 13, 7, 9}, K=15;
    int n = sizeof(arr)/sizeof(arr[0]);
    v=fun(arr, n, K);

    for(const int& x:v) 
        cout << x << " ";
}