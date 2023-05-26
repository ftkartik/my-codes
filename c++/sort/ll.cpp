#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<string> arr={"eat","tea","tan","ate","nat","bat"};
    for(int i=0;i<arr.size();i++)
    {
        sort(arr[i].begin(),arr[i].end());
    }
    // sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}