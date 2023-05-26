#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int x= *max_element(arr.begin(),arr.end());
        // cout<<x<<endl;
        int start=0,end=arr.size()-1;
        int a=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==x)
            {
                a=mid;
                return mid;
            }
            else if(arr[mid]<x)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return a;
    }

};

int main()
{
    vector<int> arr={24,69,100,99,79,78,67,36,26,19};
    Solution s1;
    cout<<s1.peakIndexInMountainArray(arr);
    return 0;
}