#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<n)
    {
        int a=0;
        while(a<n-i)
        {
            cout<<" ";
            a+=1;
        }  
        int b=1;
        while(b<=i-1)
        {
            cout<<b;
            b+=1;
        }
        int c=i;
        while (c>=1)
        {
            cout<<c;
            c-=1;

        }

        cout<<endl;
        i+=1;


    }
}