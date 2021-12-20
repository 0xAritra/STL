#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[4] = {5, 11, 2, 19};
    sort(arr, arr+4);

    if(binary_search(arr, arr+4, 19))
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
}