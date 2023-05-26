#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int a=1;
        int b=n-i+1;
        while(a<=b)
        {
            cout<<a;
            a+=1;
        }
        int c=1;
        int d=abs(n-n-i+1);
        while(c<=2*d)
        {
            cout<<"*";
            c+=1;
        }
        int e=n-i+1;
        while(e>=1)
        {
            cout<<e;
            e-=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}