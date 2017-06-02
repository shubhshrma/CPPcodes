#include<iostream>
#include<stack>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i=0,f=0;
    stack<char> s;
    cin>>t;
    while(t--)
    {
        f=0;
        string str;
        cin>>str;
        int n=str.length();
        s.push(str[0]);
        for(i=1;i<n;i++)
        {




            if(str[i]=='C')
            {
               if(s.top()=='E' || s.top()=='S' )
               {

                   f=1;
                   break;
               }

            }

            else if(str[i]=='E')
            {
                if(s.top()=='S' )
               {

                   f=1;
                   break;
               }
               else
                s.push('E');


            }
            else if(str[i]=='S')
            {

                s.push('S');
            }


        }
        if(f==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
