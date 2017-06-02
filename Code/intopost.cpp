#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string str,s2;
    int i=0;
    stack<char> p;
    cout<<"Enter the infix expression :";
    cin>>str;
    for(i=0;i<str.length();i++)
    {

        if(str[i]>='0' && str[i]<='9')
            s2.push_back(str[i]);
        else if(str[i]=='(')
            p.push(str[i]);
        else if(str[i]=='+' || str[i]=='-' || str[i]=='/' ||str[i]=='*')
        {
            if(p.empty())
                p.push(str[i]);
            else if(p.top()=='(')
            {
               p.push(str[i]);

            }
                else
                {
                    char ch=p.top();
                    if((ch=='+'||ch=='-') && (str[i]=='*'||str[i]=='/') )
                        p.push(str[i]);
                    else if((ch=='*'||ch=='/') && (str[i]=='+'||str[i]=='-'))
                    {
                        s2.push_back(ch);
                        p.pop();
                        p.push(str[i]);
                    }

                    else
                    {
                        s2.push_back(ch);
                        p.pop();
                        p.push(str[i]);
                    }


                }
        }

        else if(str[i]==')')
        {
            while(p.top()!='(')
            {
                s2.push_back(p.top());
                p.pop();
            }
            p.pop();
        }
    }
    if(!p.empty())
    {
        while(!p.empty())
        {
            s2.push_back(p.top());
            p.pop();
        }
    }
    cout<<"Post fix expression  : ";
    cout<<s2;


    stack<float> p2;

    for(i=0;i<s2.length();i++)
    {
        if(s2[i]>='0' && s2[i]<='9')
            p2.push(float(s2[i]-'0'));
        else if(s2[i]=='+' || s2[i]=='-' || s2[i]=='/' ||s2[i]=='*')
        {
            float a=p2.top();
            p2.pop();
            float b=p2.top();
            p2.pop();

            if(s2[i]=='+')
                p2.push(a+b);
            if(s2[i]=='-')
                p2.push(b-a);
            if(s2[i]=='*')
                p2.push(a*b);
            if(s2[i]=='/')
                p2.push(b/a);
        }
    }
    cout<<endl<<"Evaluation of postfix expression : "<<p2.top();


}

