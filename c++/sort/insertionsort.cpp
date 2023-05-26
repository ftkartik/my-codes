#include<iostream>
#include<vector>
using namespace std;
class sorts
{
    public:
    void bubblesort(vector<int> arr)
    {
        int n=arr.size();
        int i=1;
        while(i<n)
        {
            int j=i-1;
            int temp=arr[i];
            while(j>=0)
            {
                if(arr[j]>temp)
                {
                    arr[j+1]=arr[j];
                    
                }
                else{
                    break;
                }
                j--;
            }
            arr[j+1]=temp;
            i++;
        }
         for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    }
};
int main()
{
    vector<int>arr={6,5,4,3,2,1};
    sorts s1;

    s1.bubblesort(arr);

    return 0;
}