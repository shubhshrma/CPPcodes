#include<iostream>
#include<cctype>
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
    Node* insertbeg(int,Node *);

    void display(Node *);
    Node* merge(Node *head1,Node *head2);

};

Node* head1=NULL;
Node* head2=NULL;
Node* head3=NULL;
Node* Node::insertbeg(int a,Node *head)
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
    return head;

}

void Node::display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

Node* Node::merge(Node *a,Node* b)
{
    Node *result=NULL;
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    if(a->data<=b->data){
        result=a;
        result->next=merge(a->next,b);
    }
    else{
        result=b;
        result->next=merge(a,b->next);
    }
    return result;
}
int main()
{
    int ch,a;
    Node n1,n2,n3;
    cout<<"Enter the two sorted lists :";
    cout<<"\nFirst list: Descending order(Enter 111 to quit)";
    while(1)
    {

        cin>>a;
        if(a==111)
        {
            break;
        }
        head1=n1.insertbeg(a,head1);

    }
    cout<<"\nSecond list: Descending order(Enter 111 to quit)";
    while(1)
    {
        cin>>a;
        if(a==111)
        {
            break;
        }
        head2=n2.insertbeg(a,head2);
    }
    cout<<"\nMerged list is :\n";
    head3=n3.merge(head1,head2);
    n3.display(head3);
}
