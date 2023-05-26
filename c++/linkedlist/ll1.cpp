#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void deletenode(int pos,Node*&head)
{
    Node *temp=head;
    int count=1;
    if(pos==1)
    {
        // Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    while(count<pos-2)
    {
        temp=temp->next;
        count++;
    }
    Node* temp1=temp->next;
    temp->next=temp1->next;
    delete temp1;

}
void insertathead(Node *&head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertattail(Node*&tail,int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
    tail->data=temp->data;
}
void insertanywhere(int pos,int d,Node* &head,Node*&tail)
{
    if(pos==1)
    {
        insertathead(head,d);
        return;
    }
    Node *temp=new Node(d);
    Node*temp1=head;
    int count=1;
    while(count<pos-1)
    {
        temp1=temp1->next;
        count++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    temp->next=temp1->next;
    temp1->next=temp;
    

}
void print(Node *&head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;        
    }
    cout<<endl;
}
int main()
{
    
    Node *n1=new Node(6);
    Node *head=n1;
    // n1.Node(6);
    // cout<<n1->data<<endl;
    print(head);
    // cout<<n1->next<<endl;
   
    insertathead(head,156);
    print(head);
    Node *tail=n1;
    insertattail(tail,20);
    print(head);
    insertanywhere(2,55,head,tail);
    print(head);
    insertanywhere(1,88,head,tail);
    print(head);
    insertanywhere(6,1,head,tail);
    print(head);
    deletenode(2,head);
    print(head);
    deletenode(1,head);
    print(head);
    return 0;
}