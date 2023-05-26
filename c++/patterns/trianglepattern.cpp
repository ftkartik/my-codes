#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1,count=1,j;
    while(i<=n)
    {
        j=1;
        int val=i;
        while(j<=i)
        {
            
            cout<<val<<" ";
            val-=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}