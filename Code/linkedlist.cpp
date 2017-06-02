#include<iostream>
using namespace std;
class Node;
Node *head=NULL;
class Node
{
    Node *next;
    int data;
public:
    Node* getnode()
    {
        Node * node=new Node();
        return node;
    }
    void insert(int);
    void display();
};
    void Node::insert(int data)
    {
        int pos;
        cout<<"\nEnter the position to insert :";
        cin>>pos;
        Node *temp=getnode();
        temp->data=data;
        if(pos==1)
        {
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
        else{
            Node *temp1;
            temp1=head;
            int i=0;
            for(i=0;i<pos-2;i++)
            {
                temp1=temp1->next;
                temp->next=temp1;
                temp1->next=temp;


            }
        }
    }

    void Node::display()
    {
        Node *temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }

    }



int main()
{
    Node n;
    n.insert(2);
    n.insert(2);
    n.insert(3);
    n.display();

}


