#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;

};
Node* root=NULL;

Node* getnode()
{
    Node* temp=new Node;
    return temp;
}
Node* insert(Node *root,int dat)
{
    Node *temp=getnode();
    temp->data=dat;
    if(root==NULL)
        root=temp;
    else if(root->data > dat)
        root->left=insert(root->left,dat);
    else if(root->data < dat)
        root->right=insert(root->right,dat);
    return root;

}
Node* findmin(Node *root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
Node* Delete(Node *root,int dat)
{
    if(root==NULL)
        return root;
    else if(root->data > dat)
        root->left=Delete(root->left,dat);
    else if(root->data < dat)
        root->right=Delete(root->right,dat);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            Node* temp=root;
            delete temp;
        }
        else if(root->left==NULL)
        {
            Node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right=NULL)
        {
            Node* temp=root;
            root=root->left;
            delete temp;
        }
        else
        {
            Node *temp=findmin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
    return root;
}

void display_bfs(Node* root)
{

    if(root==NULL)
    {
        cout<<"Tree empty. Exiting...";
        return;
    }

    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        cout<<temp->data<<endl;
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        q.pop();
    }
}

void display_dfs_inorder(Node *root)
{
     if(root==NULL)
        return;
     else{
        cout<<root->data<<endl;
        display_dfs_inorder(root->left);
        display_dfs_inorder(root->right);
     }
}

int main()
{
    cout<<"This is a tree implementation..."<<endl;
    char ch='y';
    int a;
    while(ch=='y')
    {
        cout<<"Enter an integer to insert into tree";
        cin>>a;
        root=insert(root,a);
        cout<<"Do you want to continue? y or n:";
        cin>>ch;
    }
    cout<<"Breadth first traversal : "<<endl;
    display_bfs(root);
    cout<<"Enter an integer to delete :";
    cin>>a;
    root=Delete(root,a);
    cout<<"Depth first inorder traversal : "<<endl;
    display_dfs_inorder(root);

}
