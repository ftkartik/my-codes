#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int i=1;
    
  
    while(i<=n){
        
          int j=1;
          int val=i-1;
          
        while(j<=n)
        {
            char ch='A'+val;
            cout<<ch<<' ';
            j+=1;
            val+=1;
        }
        cout<<endl;
        i+=1;
    }
}