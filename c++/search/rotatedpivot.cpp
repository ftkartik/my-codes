#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search(vector<int>& arr, int key) {
    int start=0,end=arr.size()-1;
    int pivot=-1;
    while(start<=end)
    {
       int mid=start+(end-start)/2;
       if(arr[mid]==key)
       {
        pivot=mid;
        break;
       }
       else
       {
        if(arr[mid]>arr[mid+1])
        {
            mid++;
        }
        else{
            mid--;
        }
       }
    }
    return pivot;
    }
int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};int target = 0;
    cout<<search(nums,target);
}