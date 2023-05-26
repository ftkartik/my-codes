#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=1;
    
    while(i<=n)
    {
        int j=0;
        
        while(j<=i-1)
        {
            cout<<" ";
           j+=1;  
        }
        
        int val=n,k=i-1;
        while(val>k)
        {
            cout<<count;
            val-=1;
        }
        count+=1;
        cout<<endl;
        i+=1;

    }
}