#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minimumInteger(int N, vector<int> &A) {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        vector<int> B=A;
        sort(B.begin(),B.end());
        int s=0;
        int e=N-1;
        int mid=s+(e-s)/2;
        while(B[mid]*N<=sum)
        {
            if(B[mid]*N==sum)
            {
                return B[mid];
            }
            else if(B[mid]*N<sum)
            {
                mid++;
            }
            // else
            // {
            //     mid--;
            // }
        }
        return B[mid];
    }
int main()
{
    return 0;
}