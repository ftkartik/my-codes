#include<iostream>
using namespace std;
class Stack
{
    public:
    int size;
    int *arr;
    int top;
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
        if(top==size-1)
        {
            cout<<"stack overflow";
        }
        top++;
        arr[top]=element;
    }
    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        return -1;
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    bool isempty()
    {
        if(top==-1)
        return 1;
        return 0;
    }
};
int main()
{
    Stack st(5);
    st.push(22);
    st.push(44);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    cout<<st.isempty();
    return 0;
}