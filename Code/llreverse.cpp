#include<iostream>

using namespace std;
class Node
{
    int data;
    Node *next;
public:
    Node* getnode()
    {
        Node * temp=new Node;
        return temp;
    }
    void insertbeg(int);

    void display();
    void reverselist(Node *);
};
Node* head=NULL;

void Node::insertbeg(int a)
{
    Node *temp=getnode();
    temp->data=a;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void Node::reverselist(Node *head)
{
    Node *temp=head;
    if(temp==NULL)
    {
        return;
    }
    reverselist(temp->next);
        cout<<temp->data<<" ";
}

void Node::display()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int ch,a;
    Node n;
    while(1)
    {
    cout<<"\nPress\n 1.Insert  at beginning \n 2.Display \n 3.Print reverse\n 4.Exit\n";
    cin>>ch;
    switch(ch)
    {

    case 1:
        {
        cout<<"Enter the data to insert at beginning :";
        cin>>a;
        n.insertbeg(a);
        break;
        }
    case 2:
        {
        n.display();
        break;
        }
    case 4:
        {
        return 0;
        break;
        }
    case 3:
        {
            n.reverselist(head);
        }
    }
    }
}
