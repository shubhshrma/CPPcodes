#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        long long int time=0,i=0,s1=0,s12=0,last_one=-1,f1=0,c=0;

        cin>>str;
        if(str[i]=='0')
            {
            while(str[i]=='0')
               i++;
            }
        while(1)
        {
             s1=s12;
             i=last_one+1;

             while(str[i]=='1' && i<str.length())
                {
                  s1++;
                  i++;
                  f1=1;
                }
                if(i==str.length())
                    break;
                c=i;

                while(c<str.length()-1 && str[c+1]=='0' )
                        c++;



                    last_one=c;


                i--;



                s12=s1;
                c-=s1;
                i-=s1;
                time+=s1*(1+c-i);
                s1=0;

        }


        cout<<time<<endl;
}}
