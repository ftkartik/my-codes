#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> searchRange(vector<int>& nums, int target) {
        
    vector<int> arr;
    int start=0,end=nums.size()-1;
    int mid=start+(end-start)/2;
    int first=-1,last=-1;
        while(start<=end)
        { 
             int mid=start+(end-start)/2;
            
            if(target==nums.at(mid))
            {
                first=mid;
                end=mid-1;
            }
            else if(nums.at(mid)>target)
                {
                    end=mid-1;
                }
                else{
                    start=mid+1; 
                }
            
        }
        start=0,end=nums.size()-1;
        while(start<=end)
        {
             int mid=start+(end-start)/2;
            if(target==nums.at(mid))
            {
                last=mid;
                start=mid+1;
            }
            else if(nums.at(mid)>target)
                {
                    end=mid-1;
                }
                else{
                    start=mid+1; 
                }
            
        }
        // sort(arr.begin(),arr.end());
        return {first,last};

    }

int main()
{
    vector<int> arr = {5,7,7,8,8,10};int  target = 8;
    vector<int>res=searchRange(arr,target);
    for(int i=0;i<=res.size();i++)
    {
        cout<<res.at(i)<<" ";
    }

    return 0;
}