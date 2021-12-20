#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int myCmp(int x, int y)
{
    return (x > y);
}
int main()
{
    vector<int> v{5, 7, 2, 15, 69, 12, 567, 265};
    // sort(v.begin(), v.end(), greater<int>());
    sort(v.begin(), v.end(), myCmp);
    for(const int& x:v)
        cout<< x <<" ";
}