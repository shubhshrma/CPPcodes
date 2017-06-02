#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0,cl=1,cb=2;
        cin>>a>>b;
        if(cl>a)
        {
            cout<<"Bob";
            return 0;
        }
        else if(cb>b)
        {
            cout<<"Limak";
            return 0;
        }
        while(1)
        {
            c++;
            if(c%2==0)
            {
                cb+=c;
            }
            else
                cl+=c;
            if(cl>a)
            {
                cout<<"Bob";
            return 0;}
            else if(cb>b)
        {
            cout<<"Limak";
            return 0;
        }
        }

        }
    }

