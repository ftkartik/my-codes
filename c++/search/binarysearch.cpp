#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int start=0,end=n-1;
    while(start<=end)
    {
       int mid=start+(end-start)/2;
       if(arr[mid]==key)
       {
        return mid;
       }
       else
       {
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
    }
    return -1;
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    cout<<"the index of the element 7 is "<<binarysearch(arr,8,7);
    return 0;
}