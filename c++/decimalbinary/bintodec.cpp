#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0,a=1;
    while(n!=0)
    {
       int bit=n%10;
        if(bit==1)
        {
            ans=ans+a;

        }
        n=n/10;
        a=a<<1;
    }
    cout<<ans;
    return 0;
}