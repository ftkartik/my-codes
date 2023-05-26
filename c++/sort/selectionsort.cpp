#include<iostream>
#include<vector>

using namespace std;
vector<int> selectionsort(vector<int>arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;    
            }
        }
        swap(arr[i],arr[min]);
    }
    return arr;
}
int main()
{
    vector<int> arr={2,1,18,12,34,26};
    vector<int> a=selectionsort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}