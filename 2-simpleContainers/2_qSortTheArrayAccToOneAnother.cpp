#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

void sortArr(int a[], char b[], int n)
{
    pair<int, char> arr[n];
    for(int i=0; i<n; i++)
        arr[i]={a[i],b[i]};
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
        cout << arr[i].second << " ";
}

int main()
{
    int a[]={2, 3, 1}, n=3;
    char b[]={'A', 'V', 'B'}, *c;

    sortArr(a,
    
    
    
     b, n);
}