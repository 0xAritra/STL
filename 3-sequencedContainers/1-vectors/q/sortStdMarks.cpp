#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

void sortMarks(int roll_no[], int marks[], int n)
{
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({marks[i], roll_no[i]});
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    cout<<"RollNo"<< "  " << "Marks" << endl;
    for (int i = 0; i < n; i++)
        cout << v[i].second << "\t" << v[i].first << endl;
}

int main()
{
    int roll_no[]={17, 20, 15, 1, 5}, marks[]={80, 75, 93, 78, 84}, n;
    n=sizeof(roll_no)/sizeof(roll_no[0]);
    sortMarks(roll_no, marks, n);
}