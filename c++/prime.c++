#include<iostream>
using namespace std;
int main()
{
    int count=1;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count==2)
    {
        cout<<n<<" is a prime nos";
    }
    else{
        cout<<n<<" is a composite nos";
    }
    return 0;
}