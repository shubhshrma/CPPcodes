
#include<iostream>
using namespace std;
#define N 5
class Queue
{
    int arr[N];
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
            if((front==0 && rear==N-1) ||  (rear==front-1))
            {
                cout<<"Overflow\n";
                return;
            }
            else if(front==-1)
            {
                rear++;
                front++;
            }

            else if(rear==N-1 && front>0)
            {
                rear=0;

            }
            else{rear++;}
            arr[rear]=a;
        }
        void dequeue()
        {
          if(front==-1)
          {
              cout<<"Underflow\n";
              return;
          }
          else if(front==rear)
          {
              front=-1;
              rear=-1;
          }
          else if(front==N-1)
            front=0;
          else
            front++;
        }
        void display()
        {
            if(rear==-1)
            {
                cout<<"Queue empty\n";
                return;

            }

             if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout<<arr[i];
    }
    else
    {
        for (int i = front; i < N; i++)
            cout<<arr[i];

        for (int i = 0; i <= rear; i++)
            cout<<arr[i];
    }
    }

};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);q.enqueue(5);
    q.dequeue();
    q.enqueue(6);
    q.display();
}
