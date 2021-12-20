#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

void sortIndex(int *arr, int n)
{
    vector<pair<int,int>> v;
    for (int i=0; i<n; i++)
        v.push_back({arr[i], i});
    sort(v.begin(), v.end());
    cout<<"No.\t"<<"Index"<<endl;
    for (int i=0; i<n; i++)
        cout<< v[i].first << "\t" << v[i].second << endl;
}

int main()
{
    int arr[]={2, 5, 3, 7, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortIndex(arr, n);
}