#include<iostream>
using namespace std;

template<typename T, int limit>
T maxArr(T arr[], int n)
{
    if(n>limit)
    {
        cout<<"Size Exceeded!";
        return 0;
    }
    T res = arr[0];
    for (int i=1; i<n; i++)
    {
        if (res<arr[i])
        {
            res=arr[i];
        }
    }
    return res;
}


int main()
{
    int arr1[] = {10, 15, 12, 20};
    cout<<maxArr<int, 4>(arr1, 4)<<endl;
    float arr2[] = {10.25, 15.34, 12.78, 29.75, 16.69};
    cout<<maxArr<float, 5>(arr2, 5)<<endl;
}