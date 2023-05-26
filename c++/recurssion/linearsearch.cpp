#include<iostream>
using namespace std;
bool find(int arr[],int size,int key)
{
    if(size==0)
    return 0;
    if(arr[0]==key)
    return 1;
    else
    {
        return find(arr+1,size-1,key);
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<find(arr,size,key);
    return 0;
    return 0;
}