#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        node*left;
        node*right;
    }
};
node* buildtree(node* root)
{
    // int data;
    // cout<<"enter data "<<endl;
    // cin>>data;
    // root=new node(data);

    // if(data==-1)
    // return NULL;

    // cout<<"enter the data for the left of "<<data<<endl;
    // root->left=buildtree(root->left);
    // cout<<"enter the data for the right of "<<data<<endl;
    // root->right=buildtree(root->right);
    // return root;
    int data;
    cout<<"enter the data "<<endl;
    cin>>data;
    root =new node(data);
    if(data==-1)
    return NULL;

    cout<<"enter the data for the left of the node "<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for the right of the node "<<endl;
    root->right=buildtree(root->right);
    return root;
}
void levelorder(node* root) // BFS
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<temp->data<< " ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }

}
// reverse level order
void inordertrav(node* root)
{
    if(root==NULL)
    return;
    inordertrav(root->left);
    cout<<root->data<<" ";
    inordertrav(root->right);
}
void preorder(node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root=NULL;
    root= buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<endl<<"level order traversal"<<endl;  
    levelorder(root);
    cout<<"inorder"<<endl;
    inordertrav(root);
    cout<<endl;
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}