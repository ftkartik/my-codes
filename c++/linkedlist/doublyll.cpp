#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }
};
void print(node *&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(int data, node*&head,node*&tail)
{
    if(head==NULL)
    {
        node* temp=new node(data);
        head=temp;
        tail=temp;
        return ;
    }
    
    node*temp=new node(data);
    // node*temp1=head;
    temp->next=head;
    head->prev=temp;
    // tail=head;
    head=temp;
}
void insertattail(int d,node* &tail)
{
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertany(int pos, node*&head,node*&tail,int d)
{
    node*temp=new node(d);
    node*temp1=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        cnt++;
        temp1=temp1->next;
    }
    if(temp->next==NULL)
    {
        insertattail(d,tail);
        return;
    }
    temp->next=temp1->next;
    temp1->next->prev=temp;
    temp1->next=temp;
    temp->prev=temp1;
    
}

int main()
{
    // node*n1=new node(8);
    node* head=NULL;
    node* tail=NULL;
    insertathead(8,head,tail);
    print(head);
    insertathead(9,head,tail);
    print(head);
    insertattail(6,tail);
    print(head);
    insertany(3,head,tail,7);
    print(head);
    return 0;
}