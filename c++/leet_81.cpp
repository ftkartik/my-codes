#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr={2,5,6,0,0,1,2};
    int a=*min_element(arr.begin(),arr.end());
    auto it=find(arr.begin(),arr.end(),a);
    int index = it - arr.begin();
    cout << index << endl;
    // cout<<it;


    return 0;
}