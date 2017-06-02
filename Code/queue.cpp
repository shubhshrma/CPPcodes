#include<iostream>
using namespace std;
#define SIZE 1000
int arr[SIZE];
class Queue
{
    int front;
    int rear;
public:
    Queue()
    {
        front=-1;
        rear=-1;
    }
    void enqueue(int a)
    {
          if(rear==SIZE-1)
        {
            cout<<"Overflow";
            return;
        }

        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
        }

        else
            rear++;
        arr[rear]=a;

    }
    void dequeue()
    {
        if(rear==-1)
        {
            cout<<"Underflow";
            return;
        }
        else if(rear==front)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            front++;
        }
    }
    void display()
    {
        if(rear==-1)
        {
            cout<<"Queue empty ";
            return;
        }

           for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";
    }
};
int main()
{
    Queue q;
    int ch,a;
    cout<<"This is a queue implementation ...";
    while(1)
    {
    cout<<"\nEnter 1 for push,2 for pop,3 for display queue,4 for exit :";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter an integer to push:";
        cin>>a;
        q.enqueue(a);
    }
    else if(ch==2)
    {
        q.dequeue();
    }
    else if (ch==4)
        break;
    else if (ch==3)
    {
        q.display();
    }
    }
}
