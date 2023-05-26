#include<iostream>
using namespace std;
void print(int i,int n)
{
    if(n>5)
    {
        return;
    }
    
    print(i,n+1);  
    cout<<n<<endl; 

}
int main()
{
    print(5,1);
    return 0;
}